#!/usr/bin/env bash

# on Linux (Debian/Uuntu)
# We check the dist dir and create it if doesn't exist
[ -d "./dist/" ] && echo "" || mkdir dist

# We compile it
gcc -std=gnu99 ./tests/tests.c -Wall ./src/func.c -lCello -lm -lpthread -o ./dist/tests.bin

# We launch tests
./dist/tests.bin
