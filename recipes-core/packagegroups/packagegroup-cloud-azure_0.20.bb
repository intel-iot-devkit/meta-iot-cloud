DESCRIPTION = "Packages for Microsoft Azure IoT."
LICENSE = "MIT"

inherit packagegroup

PR = "r0"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "c python"

PACKAGECONFIG[c] = "\
    , \
    , \
    , \
    azure-iot-sdk-c \
    azure-iot-sdk-c-dev \
"

PACKAGECONFIG[python] = "\
    , \
    , \
    , \
    python3-azure-iot-device \
"
