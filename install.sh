#!/bin/sh
make setup_dkms && make udev_install
dkms install -m leetmouse-driver -v 0.9.0
