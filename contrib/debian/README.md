
Debian
====================
This directory contains files used to package GoldenTrillionCashd/GoldenTrillionCash-qt
for Debian-based Linux systems. If you compile GoldenTrillionCashd/GoldenTrillionCash-qt yourself, there are some useful files here.

## GoldenTrillionCash: URI support ##


GoldenTrillionCash-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install GoldenTrillionCash-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your GoldenTrillionCashqt binary to `/usr/bin`
and the `../../share/pixmaps/GoldenTrillionCash128.png` to `/usr/share/pixmaps`

GoldenTrillionCash-qt.protocol (KDE)

