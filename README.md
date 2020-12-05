# DolphINO
Little project to use Arduino pushbuttons as input to the Dolphin emulator
![Test image](test.png)
Tested on Ubuntu 18.04.2 LTS

## Instructions
* Connect the pushbuttons to pins 2 and 3
* Copy WiimoteNew.ini to ~/.config/dolphin-emu (or wherever dolphin sabes your controller config)
* Upload controller code to board
* Give execution permission to connect.sh (chmod +x connect.sh)
* Start Dolphin emulator 
* Run connect script
* Test buttons on Dolphin
