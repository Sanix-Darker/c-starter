#!/bin/bash

WHERE_I_WAS="$PWD"

echo "[+] Clib installation started !"

git clone https://github.com/clibs/clib.git /tmp/clib
cd /tmp/clib

make
make install

cd $WHERE_I_WAS

if [ $? == 0 ]; then
    echo "[+] Clib have been installed successfully !"
else
    echo "[x] Clib failed to install, something went wrong !"
fi
