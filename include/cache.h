/*
 * Copyright (c) 2019, Aditya Rohan
 * Copyright (c) 2019, Aniket Pandey
 * 
 * Submitted to:
 * CS622A: 2019-20 Fall Semester. Assignment 1
 */

#ifndef _CACHE_H_
#define _CACHE_H_

#include <list>
#include <memory>
#include <vector>

#define BLOCK_OFFSET   6
#define L2_WAY         8
#define L3_WAY        16
#define L2_SET      1024
#define L3_SET      2048
#define L3_FA_WAY  32768
#define L3_FA_SET      1

typedef unsigned long long int_t;
enum type {L2Cache, L3Cache};

struct cell {
    bool present;	// Valid bit
    int_t address;	// Memory address
};

class Cache {
  public:
    typedef std::shared_ptr<Cache> Ptr;

    // ctor
    Cache(type level, int num_sets, int num_ways);

    // dtor
    ~Cache() = default;

    // Retrieve block from memory on miss.
    int_t add_block(int_t address);
    
    // Check hit or miss for req. address
    bool check_hit_or_miss(int_t address);
    
    // Evict victim block from cache.
    void invalidate_block(int_t address);

    // Update LRU table on cache hit.
    void update_on_hit(int_t address);

    // Count of hits and misses
    int_t hits = 0, misses = 0;

  private:
    // Cache Heirarchy (L1 or L2).
    type level_;

    // Number of sets in the cache.
    int num_sets_;

    // Number of ways in the cache.
    int num_ways_;

    // 2-d matrix, representing the cache org.
    std::vector <std::vector <cell> > matrix_;

    // List of sets for recording LRU status.
    std::vector <std::list <int_t> > lru_set_;
    
};

# endif  // _CACHE_H_