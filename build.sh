#!/usr/bin/env bash

# on Linux (Debian/Uuntu)
# We check the dist dir and create it if doesn't exist
rm -rf dist
mkdir dist
# We compile the main source
gcc -std=gnu99 ./src/main.c -Wall ./src/func.c -lCello -lm -lpthread -o ./dist/app.bin

# On Windows
# gcc -std=gnu99 ./src/main.c  -Wall ./src/func.c -lCello -lDbgHelp -o ./dist/app.bin
