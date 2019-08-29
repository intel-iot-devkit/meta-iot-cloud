DESCRIPTION = "Packages for Microsoft Azure IoT."
LICENSE = "MIT"

inherit packagegroup

PR = "r0"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "c node-red"

PACKAGECONFIG[c] = "\
    , \
    , \
    , \
    azure-iot-sdk-c \
    azure-iot-sdk-c-dev \
"

PACKAGECONFIG[node-red] = "\
    , \
    , \
    , \
    node-red-contrib-azureiothubnode \
"
