DESCRIPTION = "Microsoft Azure IoT Device Library"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-python/tree/master/azure-iot-device"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit pypi setuptools3

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-asyncio \
    ${PYTHON_PN}-crypt \
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-netclient \
"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-deprecation \
    ${PYTHON_PN}-janus \
    ${PYTHON_PN}-paho-mqtt \
    ${PYTHON_PN}-pysocks \
    ${PYTHON_PN}-requests \
    ${PYTHON_PN}-requests-unixsocket \
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-urllib3 \
"

PR = "r0"

SRC_URI[sha256sum] = "e03594497e35ba9020b50546e1346b51c492629b970e4e2c5e0ddc5c41c54cbe"
