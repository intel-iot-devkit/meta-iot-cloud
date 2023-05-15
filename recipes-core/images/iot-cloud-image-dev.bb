SUMMARY = "IoT Cloud development image"

require iot-cloud-image.bb

IMAGE_FEATURES += "dev-pkgs debug-tweaks ssh-server-dropbear"

CORE_IMAGE_EXTRA_INSTALL = "\
    packagegroup-cloud-aws \
    packagegroup-cloud-azure \
    packagegroup-cloud-google \
    packagegroup-cloud-ibm \
    node-red \
    rclone \
"
