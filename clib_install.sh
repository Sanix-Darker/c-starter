echo "[+] ----------------------------"
echo "[+] Clib installation started !"
git clone https://github.com/clibs/clib.git /tmp/clib
cd /tmp/clib
make
sudo make install
echo "[+] Clib have been installed successfully !"
echo "[+] ----------------------------------------"