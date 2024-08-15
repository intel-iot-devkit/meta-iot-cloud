SUMMARY = "IoT Cloud development image"

require iot-cloud-image.bb

IMAGE_FEATURES += "dev-pkgs debug-tweaks ssh-server-dropbear"

CORE_IMAGE_EXTRA_INSTALL = "\
    node-red \
    packagegroup-cloud-azure \
    packagegroup-cloud-google \
    rclone \
"
