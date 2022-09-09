#!/bin/sh

# Unbind all mice from the driver
/usr/lib/udev/leetmouse_manage unbind_all
# Uninstall the driver
dkms remove -m leetmouse-driver -v 0.9.0
make remove_dkms && make udev_uninstall
