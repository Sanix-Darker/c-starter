#!/usr/bin/env bash

echo "[+] ----------------------------"
echo "[+] Cello installation started !"
apt-get update
apt-get install zip unzip wget build-essential gcc
wget http://libcello.org/static/libCello-2.1.0.tar.gz

tar -xzf libCello-2.1.0.tar.gz
cd libCello-2.1.0

make
make check
make install

cd ../
# We delete the tar and the directory
rm -rf libCello-2.1.0.tar.gz libCello-2.1.0

echo "[+] Cello have been installed successfully !"
echo "[+] ----------------------------------------"
