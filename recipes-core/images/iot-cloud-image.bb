SUMMARY = "IoT Cloud base image"

LICENSE = "MIT"

inherit core-image

DISTRO_FEATURES_append = " systemd"

VIRTUAL-RUNTIME_init_manager = "systemd"
VIRTUAL-RUNTIME_initscripts = "systemd-compat-units"