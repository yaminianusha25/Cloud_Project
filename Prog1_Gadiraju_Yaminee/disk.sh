#!/bin/bash

cc -pthread -o Test Test.c

printf "\nOne thread-Write sequential 1B"
./Test 1
printf  "\Two threads-Write sequential 1B"
./Test 2
printf "\nOne thread-Write sequential 1KB"
./Test 3
printf "\nTwo thread-Write sequential 1KB"
./Test 4
printf "\nOne thread-Write sequential 1MB"
./Test 5
printf "\Two threads-Write sequential 1MB"
./Test 6
printf "For one thread,Read random 1B"
./Test 7
printf  "\nFor two threads ,Read random 1B"
./Test 8
printf "\nFor one thread , Read random 1KB"
./Test 9
printf "\nFor two thread , Read random 1KB"
./Test 10
printf "\nFor one thread , Read random 1MB"
./Test 11
printf "\nFor two threads , Read random 1MB"
./Test 12
printf "For one thread , Write random 1B"
./Test 13
printf  "\nFor two threads , Write random 1B"
./Test 14
printf "\nFor one threads , Write random 1KB"
./Test 15
printf "\nFor tw0 thread , Write random 1KB"
./Test 16
printf "\nFor one threads , Write random 1MB"
./Test 17
printf "\nFor two threads , Write random 1KB"
./Test 18
printf "For one thread , Read sequential 1B"
./Test 19
printf  "\nFor two threads , Read sequential 1B"
./Test 20
printf "\nFor one threads , Read sequential 1KB"
./Test 21
printf "\nFor two thread , Read sequential 1KB"
./Test 22
printf "\nFor one threads , Read sequential 1MB"
./Test 23
printf "\nFor two threads , Read sequential 1MB"
./Test 24