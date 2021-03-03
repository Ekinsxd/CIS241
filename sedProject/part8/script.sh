#!/bin/bash

lscpu | sed -nE '/^CPU\(s\):/p'
echo '=========='
#not formatted correctly yet
free -h | sed -E '1,2 s/Gi/ Gigabytes/g;s/Mi/ Megabytes/g;/Swap:.*/d'
echo '=========='
echo 'Disks:'
echo '=========='
df -h | sed -nE '/[0-9]*\.[0-9]*T/p'
echo '=========='
echo 'Date:'
echo '=========='
date | sed -E 's/Mon/Monday,/g;s/Tue/Tuesday,/g;s/Wed/Wednesday,/g;s/Thr/Thursday,/g;s/Fri/Friday,/g;s/Sat/Saturday,/g;s/Sun/Sunday/g' | sed -E 's/Mar/March/;s/AM/a\.m\./; s/PM/p\.m\./;s/EST/Eastern Standard/'
#not completely translated
