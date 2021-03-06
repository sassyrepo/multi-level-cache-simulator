## Result of passing L1 miss traces through Cache Simulator

### PART 1 (LRU)

```
Processing file gcc.log_l1misstrace.out
------------ gcc.log_l1misstrace.out ------------
 INCLUSIVE  | L2 Hits:   11574350
 INCLUSIVE  | L2 Misses: 3036461
 INCLUSIVE  | L3 Hits:   1663059
 INCLUSIVE  | L3 Misses: 1373402

 EXCLUSIVE  | L2 Hits:   11581002
 EXCLUSIVE  | L2 Misses: 3029809
 EXCLUSIVE  | L3 Hits:   1786985
 EXCLUSIVE  | L3 Misses: 1242824

 Non-In/Ex  | L2 Hits:   11581002
 Non-In/Ex  | L2 Misses: 3029809
 Non-In/Ex  | L3 Hits:   1663561
 Non-In/Ex  | L3 Misses: 1366248

Processing file hmmer.log_l1misstrace.out
------------ hmmer.log_l1misstrace.out ------------
 INCLUSIVE  | L2 Hits:   1766344
 INCLUSIVE  | L2 Misses: 1743421
 INCLUSIVE  | L3 Hits:   1352195
 INCLUSIVE  | L3 Misses: 391226

 EXCLUSIVE  | L2 Hits:   1774443
 EXCLUSIVE  | L2 Misses: 1735322
 EXCLUSIVE  | L3 Hits:   1435276
 EXCLUSIVE  | L3 Misses: 300046

 Non-In/Ex  | L2 Hits:   1774443
 Non-In/Ex  | L2 Misses: 1735322
 Non-In/Ex  | L3 Hits:   1358978
 Non-In/Ex  | L3 Misses: 376344

Processing file gromacs.log_l1misstrace.out
------------ gromacs.log_l1misstrace.out ------------
 INCLUSIVE  | L2 Hits:   3094660
 INCLUSIVE  | L2 Misses: 336851
 INCLUSIVE  | L3 Hits:   166320
 INCLUSIVE  | L3 Misses: 170531

 EXCLUSIVE  | L2 Hits:   3094787
 EXCLUSIVE  | L2 Misses: 336724
 EXCLUSIVE  | L3 Hits:   177422
 EXCLUSIVE  | L3 Misses: 159302

 Non-In/Ex  | L2 Hits:   3094787
 Non-In/Ex  | L2 Misses: 336724
 Non-In/Ex  | L3 Hits:   166265
 Non-In/Ex  | L3 Misses: 170459

Processing file h264ref.log_l1misstrace.out
------------ h264ref.log_l1misstrace.out ------------
 INCLUSIVE  | L2 Hits:   1378895
 INCLUSIVE  | L2 Misses: 969678
 INCLUSIVE  | L3 Hits:   627532
 INCLUSIVE  | L3 Misses: 342146

 EXCLUSIVE  | L2 Hits:   1382949
 EXCLUSIVE  | L2 Misses: 965624
 EXCLUSIVE  | L3 Hits:   821943
 EXCLUSIVE  | L3 Misses: 143681

 Non-In/Ex  | L2 Hits:   1382949
 Non-In/Ex  | L2 Misses: 965624
 Non-In/Ex  | L3 Hits:   632041
 Non-In/Ex  | L3 Misses: 333583

Processing file bzip2.log_l1misstrace.out
------------ bzip2.log_l1misstrace.out ------------
 INCLUSIVE  | L2 Hits:   5259461
 INCLUSIVE  | L2 Misses: 5398166
 INCLUSIVE  | L3 Hits:   3951778
 INCLUSIVE  | L3 Misses: 1446388

 EXCLUSIVE  | L2 Hits:   5260051
 EXCLUSIVE  | L2 Misses: 5397576
 EXCLUSIVE  | L3 Hits:   4508355
 EXCLUSIVE  | L3 Misses: 889221

 Non-In/Ex  | L2 Hits:   5260051
 Non-In/Ex  | L2 Misses: 5397576
 Non-In/Ex  | L3 Hits:   3951730
 Non-In/Ex  | L3 Misses: 1445846

Processing file sphinx3.log_l1misstrace.out
------------ sphinx3.log_l1misstrace.out ------------
 INCLUSIVE  | L2 Hits:   1933098
 INCLUSIVE  | L2 Misses: 8820349
 INCLUSIVE  | L3 Hits:   612987
 INCLUSIVE  | L3 Misses: 8207362

 EXCLUSIVE  | L2 Hits:   1938317
 EXCLUSIVE  | L2 Misses: 8815130
 EXCLUSIVE  | L3 Hits:   1594354
 EXCLUSIVE  | L3 Misses: 7220776

 Non-In/Ex  | L2 Hits:   1938317
 Non-In/Ex  | L2 Misses: 8815130
 Non-In/Ex  | L3 Hits:   609986
 Non-In/Ex  | L3 Misses: 8205144
```

<hr>

### PART 2 (LRU)

```
Processing file h264ref.log_l1misstrace.out
------------ h264ref.log_l1misstrace.out ------------
 INCLUSIVE  | L2 Hits:   1379338
 INCLUSIVE  | L2 Misses: 969235
 INCLUSIVE  | L3 Hits:   633355
 INCLUSIVE  | L3 Misses: 335880

Processing file gromacs.log_l1misstrace.out
------------ gromacs.log_l1misstrace.out ------------
 INCLUSIVE  | L2 Hits:   3094571
 INCLUSIVE  | L2 Misses: 336940
 INCLUSIVE  | L3 Hits:   167572
 INCLUSIVE  | L3 Misses: 169368

Processing file hmmer.log_l1misstrace.out
------------ hmmer.log_l1misstrace.out ------------
 INCLUSIVE  | L2 Hits:   1766543
 INCLUSIVE  | L2 Misses: 1743222
 INCLUSIVE  | L3 Hits:   1366198
 INCLUSIVE  | L3 Misses: 377024

Processing file bzip2.log_l1misstrace.out
------------ bzip2.log_l1misstrace.out ------------
 INCLUSIVE  | L2 Hits:   5259636
 INCLUSIVE  | L2 Misses: 5397991
 INCLUSIVE  | L3 Hits:   4036590
 INCLUSIVE  | L3 Misses: 1361401

Processing file sphinx3.log_l1misstrace.out
------------ sphinx3.log_l1misstrace.out ------------
 INCLUSIVE  | L2 Hits:   1934522
 INCLUSIVE  | L2 Misses: 8818925
 INCLUSIVE  | L3 Hits:   431677
 INCLUSIVE  | L3 Misses: 8387248

Processing file gcc.log_l1misstrace.out
------------ gcc.log_l1misstrace.out ------------
 INCLUSIVE  | L2 Hits:   11575328
 INCLUSIVE  | L2 Misses: 3035483
 INCLUSIVE  | L3 Hits:   1665559
 INCLUSIVE  | L3 Misses: 1369924
```
> time	169m30.671s

<hr>

### PART 2 (Belady-MIN)

```
Processing file h264ref.log_l1misstrace.out
2348573 entries read.
------------ h264ref.log_l1misstrace.out ------------
 INCLUSIVE  | L2 Hits:   1004599
 INCLUSIVE  | L2 Misses: 680622
 INCLUSIVE  | L3 Hits:   590007
 INCLUSIVE  | L3 Misses: 90615

real	36m21.422s

Processing file gromacs.log_l1misstrace.out
3431511 entries read.

------------ gromacs.log_l1misstrace.out ------------
 INCLUSIVE  | L2 Hits:   3109871
 INCLUSIVE  | L2 Misses: 321640
 INCLUSIVE  | L3 Hits:   178386
 INCLUSIVE  | L3 Misses: 143254

real	46m48.278s

Processing file hmmer.log_l1misstrace.out
3509765 entries read.

------------ hmmer.log_l1misstrace.out ------------
 INCLUSIVE  | L2 Hits:   1777423
 INCLUSIVE  | L2 Misses: 1732342
 INCLUSIVE  | L3 Hits:   1578895
 INCLUSIVE  | L3 Misses: 153447

real	78m16.800s

Processing file gcc.log_l1misstrace.out
14610811 entries read.

------------ gcc.log_l1misstrace.out ------------
 INCLUSIVE  | L2 Hits:   11663932
 INCLUSIVE  | L2 Misses: 2946879
 INCLUSIVE  | L3 Hits:   2007590
 INCLUSIVE  | L3 Misses: 939289

real	421m41.517s

Processing file bzip2.log_l1misstrace.out
10657627 entries read.

------------ bzip2.log_l1misstrace.out ------------
 INCLUSIVE  | L2 Hits:   5305674
 INCLUSIVE  | L2 Misses: 5351953
 INCLUSIVE  | L3 Hits:   4815117
 INCLUSIVE  | L3 Misses: 536836

real	500m11.830s
```