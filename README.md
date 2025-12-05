
# ms912x driver for Linux 2


Hello,

The latest version of this program has been released and is now compatible with the newest versions. To run it, simply download the program and execute the code below.

✅ Everything is ready—no additional setup required
✅ Supports USB 2.0 and USB 3.0 connections
✅ Compatible with DisplayPort


Linux kernel driver for MacroSilicon USB to VGA/HDMI adapter.

There are two variants:
 - VID/PID is 534d:6021. Device is USB 2
 - VID/PID is 345f:9132. Device is USB 3

- Driver adapted for Linux kernel 6.15. by Andrey Rodríguez Araya
- Improved performance.

For kernel 6.1 checkout branch kernel-6.1

TODOs:

- Detect connector type (VGA, HDMI, etc...)
- More resolutions
- Error handling
- Is RGB to YUV conversion needed?

## Development 

Driver is written by analyzing wireshark captures of the device.

## DKMS

Run `sudo dkms install .`

- make clean
- make all -j
- sudo rmmod ms912x # It will not work if the device is in use.
- sudo modprobe drm_shmem_helper
- sudo insmod ms912x.ko

Forked From: https://github.com/rhgndf/ms912x


