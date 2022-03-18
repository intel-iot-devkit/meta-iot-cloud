SUMMARY = "IoT Cloud development image"

require iot-cloud-image.bb

IMAGE_FEATURES += "dev-pkgs debug-tweaks ssh-server-dropbear"

CORE_IMAGE_EXTRA_INSTALL = "\
    packagegroup-cloud-aws \
    packagegroup-cloud-azure \
    packagegroup-cloud-google \
    packagegroup-cloud-ibm \
    packagegroup-cloud-oisp \
    node-red \
    rclone \
    restic \
"

CORE_IMAGE_EXTRA_INSTALL:x86-64 += "\
    dotnet \
"

CORE_IMAGE_EXTRA_INSTALL:aarch64 += "\
    dotnet \
"

CORE_IMAGE_EXTRA_INSTALL:arm += "\
    dotnet \
"
