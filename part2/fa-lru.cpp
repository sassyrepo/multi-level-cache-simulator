/*
 * Copyright (c) 2019, Aditya Rohan
 * Copyright (c) 2019, Aniket Pandey
 * 
 * Submitted to:
 * CS622A: 2019-20 Fall Semester. Assignment 1
 */

#include <experimental/filesystem>
#include <iostream>
#include <fstream>
#include <sstream>
#include "cache.h"

using namespace std;
namespace fs = std::experimental::filesystem;


void inclusive(shared_ptr<Cache> l2, shared_ptr<Cache> l3, int_t addr) {
    int_t evicted;
    if (l2->check_hit_or_miss(addr)) {
        (l2->hits)++;
        l2->update_on_hit(addr);
    } else {
        (l2->misses)++;
        if (l3->check_hit_or_miss(addr)) {
            (l3->hits)++;
            l3->update_on_hit(addr);
            l2->add_block(addr);
        } else {
            (l3->misses)++;
            evicted = l3->add_block(addr);
            if (evicted && l2->check_hit_or_miss(evicted))
                l2->invalidate_block(evicted);
            l2->add_block(addr);
        }
    }
}

int main() {
    int_t type, address;
    string line, folder = "output";
    for (const auto& tracefile : fs::directory_iterator(folder)) {
        ifstream tracestrm (tracefile.path());
        if (!tracestrm.is_open())
            cerr << "Tracefile " << tracefile.path().filename().string()
                 << " could not be opened\n";

        Cache::Ptr l2Incl = make_shared<Cache>(L2Cache, L2_SET, L2_WAY);
        Cache::Ptr l3Incl =
                make_shared<Cache>(L3Cache, L3_FA_SET, L3_FA_WAY);

        // Read through the traces and simlulate above declared caches
        // through the corresponding trace.
        cout << "Processing file " << tracefile.path().filename().string()
             << endl;
        while (getline(tracestrm, line)) {
            stringstream line_(line);
            line_ >> type >> address;
            address = address >> BLOCK_OFFSET;
            // L1 cache missed, forward it to lower levels
            if (type) inclusive(l2Incl, l3Incl, address);
        }

        cout << "------------ " <<  tracefile.path().filename().string()
             << " ------------";
        cout << "\n INCLUSIVE  | L2 Hits:   " << l2Incl->hits;
        cout << "\n INCLUSIVE  | L2 Misses: " << l2Incl->misses;
        cout << "\n INCLUSIVE  | L3 Hits:   " << l3Incl->hits;
        cout << "\n INCLUSIVE  | L3 Misses: " << l3Incl->misses;
        cout << "\n";
    }
    return 0;
}
