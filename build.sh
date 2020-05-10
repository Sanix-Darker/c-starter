#!/usr/bin/env bash

# on Linux
gcc -std=gnu99 ./c_app/main.c -lCello -lm -lpthread -o app.bin

# On Windows
# gcc -std=gnu99 ./c_app/main.c -lCello -lDbgHelp -o app.bin