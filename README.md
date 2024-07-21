Cara download
1. Pasang serial USB TTL dengan ketentuan
   RX -> TX USB Serial ;   TX -> RX USB Serial; GND -> GND USB Serial
2. pasang Jumper
3. Beri Power antara 7-28VDC
4. Download ke alat
5. lepas jumper
6. Unplug Power dan Pasang lagi untuk run-program
7. ulang langkah awal  untuk download ulang


…or create a new repository on the command line
echo "# esp8266-relay-1ch" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/hwthinker/esp8266-relay-1ch.git
git push -u origin main
…or push an existing repository from the command line
git remote add origin https://github.com/hwthinker/esp8266-relay-1ch.git
git branch -M main
git push -u origin main