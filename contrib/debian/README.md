
Debian
====================
This directory contains files used to package hycoind/hycoin-qt
for Debian-based Linux systems. If you compile hycoind/hycoin-qt yourself, there are some useful files here.

## hycoin: URI support ##


hycoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install hycoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your hycoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/hycoin128.png` to `/usr/share/pixmaps`

hycoin-qt.protocol (KDE)

