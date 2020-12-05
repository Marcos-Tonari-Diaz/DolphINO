#!/bin/bash

PIPE=pipe
while true;
do
	echo reading
	cat < /dev/ttyACM0 > /home/marcos/.local/share/dolphin-emu/Pipes/pipe1
	#cat < /dev/ttyACM0
done
