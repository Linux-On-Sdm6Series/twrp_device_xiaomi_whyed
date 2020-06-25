#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
	// Framebuffer
    "/sys/class/graphics/fb0",

	// Storage Devices
    "/sys/dev/block/*",
    "/sys/block/mmcblk0/*",
    //"/sys/devices/msm_sdcc.1*",
    //"/sys/devices/msm_sdcc.2*",
    //"/sys/devices/platform/msm_hsusb_host*",
    "/sys/bus/mmc*",

	// Internal storage
    "/dev/block/platform/soc/c0c4000.sdhci",
    "/dev/block/platform/soc/c0c4000.sdhci/mmcblk*",
    //"/dev/block/platform/soc/c0c4000.sdhci/by-name/*",
    //"/dev/block/platform/soc/c084000.sdhci/*",
    //"/dev/block/platform/soc/c084000.sdhci",

	//USB
    "/sys/devices/soc/a800000.ssusb/a800000.dwc3",

	// Input
    "/sys/class/input/event*",
    "/sys/class/input/input*",
    "/sys/class/misc/uinput",
    "/sys/class/tty/ptmx",
    "/sys/class/android_usb/android0/*",
    "/sys/class/android_usb/android1/*",
    //"/sys/devices/soc/c175000.i2c/i2c-1/1-0062",
    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/misc/uinput",

	// For adb
    "/sys/devices/virtual/tty/ptmx",
    "/sys/bus/usb",
    "/sys/devices/virtual/misc/mtp_usb",

	// for qualcomm overlay - /dev/ion
    "/sys/devices/virtual/misc/ion",
    "/sys/devices/virtual/misc/device-mapper",
    "/sys/devices/virtual/qseecom/qseecom",

	// Logging
    "/sys/devices/virtual/mem/kmsg",

    NULL
};
