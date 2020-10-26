DESCRIPTION = "Microsoft Azure IoT Device Library"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-python/tree/master/azure-iot-device"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit pypi setuptools3

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-asyncio \
    ${PYTHON_PN}-crypt \
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
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

SRC_URI[sha256sum] = "223975a07c3c9dcc732f904f3c40e6589f8b33bf277a3906b84611bbbe5e6300"
