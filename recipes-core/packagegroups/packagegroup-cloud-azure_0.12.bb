DESCRIPTION = "Packages for Microsoft Azure IoT."
LICENSE = "MIT"

inherit packagegroup

PR = "r3"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "c python java node-red"

PACKAGECONFIG[c] = "\
    , \
    , \
    , \
    azure-iot-sdk \
    azure-iot-sdk-dev \
    azure-iot-edge \
    azure-iot-edge-dev \
    azure-iot-edge-modules \
    azure-iot-edge-samples \
"

PACKAGECONFIG[python] = "\
    , \
    , \
    , \
    python-azure-iot-sdk \
    python-azure-cli \
"

PACKAGECONFIG[python3] = "\
    , \
    , \
    , \
    python3-azure-cli \
"

PACKAGECONFIG[java] = "\
    , \
    , \
    , \
    azure-iot-edge-java \
    azure-iot-edge-java-binding \
    azure-iot-device-sdk-java \
    azure-iot-device-sdk-java-samples \
"

PACKAGECONFIG[node-red] = "\
    , \
    , \
    , \
    node-red-contrib-azureiothubnode \
"
