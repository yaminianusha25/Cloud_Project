#!/bin/bash

cc -pthread -o Test Test.c

printf "For one thread , Float operation :"
./Test 1
printf  "\nFor two threads , Float operation:"
./Test 2
printf "\nFor four threads , Float Operations:"
./Test 3
printf "\nFor one thread , Integer operation :"
./Test 4
printf "\nFor two threads , Integer operation:"
./Test 5
printf "\nFor four threads , Integer Operations:"
./Test 6
