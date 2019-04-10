#!/bin/bash
sudo pacman -Syu
sudo pacman -S go base-devel
git clone https://aur.archlinux.org/yay.git
cd yay
makepkg -si
cd ..
rm -rf yay 
