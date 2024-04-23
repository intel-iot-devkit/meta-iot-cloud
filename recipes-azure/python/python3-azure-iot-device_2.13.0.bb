DESCRIPTION = "Microsoft Azure IoT Device Library"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-python/tree/master/azure-iot-device"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit pypi setuptools3

RDEPENDS:${PN} += "\
    python3-deprecation \
    python3-janus \
    python3-paho-mqtt \
    python3-pysocks \
    python3-requests \
    python3-requests-unixsocket \
    python3-six \
    python3-urllib3 \
    python3-typing-extensions \
"

PR = "r0"

SRC_URI[sha256sum] = "e03594497e35ba9020b50546e1346b51c492629b970e4e2c5e0ddc5c41c54cbe"
