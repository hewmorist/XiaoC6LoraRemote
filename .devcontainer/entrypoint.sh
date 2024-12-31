#!/bin/bash

# restart udev so for new rules
# NOTE: Need to issue usbipd attach --wsl --<busid> from Windows powershell 

sudo rm -f /dev/ttyACM0
sudo mknod /dev/ttyACM0 c 166 0
sudo chmod 666 /dev/ttyACM0
sudo usermod -a -G dialout vscode
sudo service udev restart


# make it so mc exits in current dir
source home/vscode/.bashrc
