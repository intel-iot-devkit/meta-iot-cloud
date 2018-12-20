DESCRIPTION = "Microsoft Azure IoT SDKs and libraries for C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
    git://github.com/Azure/azure-iot-sdk-c.git;rev=7851827648785b666648b2e52caf5075e89a5605 \
    git://github.com/Azure/azure-c-shared-utility.git;rev=355ee4b0ed5528aeeee3dd6c6c960c8030d5d903;destsuffix=git/c-utility \
    git://github.com/Azure/azure-umqtt-c.git;rev=15b5e5bcefce0b4cfc44213e05c861b3016677b4;destsuffix=git/umqtt \
    git://github.com/Azure/azure-uamqp-c.git;rev=81bd72dd68a2fe1165ca19085fa6013305ea8a02;destsuffix=git/uamqp \
    git://github.com/kgabis/parson.git;rev=0a1896939faff5f69e179637fc49f678ff0128ba;destsuffix=git/deps/parson \
    git://github.com/Azure/azure-uhttp-c.git;rev=8ec55bb8596dae1154ae897b5064b8eba34c136c;destsuffix=git/deps/uhttp \
"

PR = "r0"

include ${PN}.inc
