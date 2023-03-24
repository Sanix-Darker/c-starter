#!/bin/bash

WHERE_I_WAS="$PWD"

echo "[+] Cello installation started !"

apt-get update
apt-get install zip unzip wget build-essential gcc

mkdir /tmp/cello
cd /tmp/cello

wget http://libcello.org/static/libCello-2.1.0.tar.gz
tar -xzf libCello-2.1.0.tar.gz

cd ./libCello-2.1.0

make
make check
make install

cd ../
# We delete the tar and the directory
rm -rf libCello-2.1.0.tar.gz libCello-2.1.0

cd $WHERE_I_WAS

if [ $? == 0 ]; then
    echo "[+] Cello have been installed successfully !"
else
    echo "[x] Cello failed to install, something went wrong !"
fi
