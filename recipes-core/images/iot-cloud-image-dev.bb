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
"

CORE_IMAGE_EXTRA_INSTALL:append:x86-64 = " \
    dotnet \
    dotnet-dev \
"

CORE_IMAGE_EXTRA_INSTALL:append:aarch64 = " \
    dotnet \
    dotnet-dev \
"

CORE_IMAGE_EXTRA_INSTALL:append:arm = " \
    dotnet \
    dotnet-dev \
"
