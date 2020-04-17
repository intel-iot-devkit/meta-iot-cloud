SUMMARY = "Microsoft Azure IoT Device Library"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-python/tree/master/azure-iot-device"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit pypi setuptools3

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-janus \
    ${PYTHON_PN}-paho-mqtt \
    ${PYTHON_PN}-pysocks \
    ${PYTHON_PN}-requests \
    ${PYTHON_PN}-requests-unixsocket \
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-transitions \
    ${PYTHON_PN}-urllib3 \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-asyncio \
    ${PYTHON_PN}-crypt \
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-multiprocessing \
    ${PYTHON_PN}-netclient \
"

PR = "r0"

SRC_URI[sha256sum] = "6186c9be8c25917a29ac9f432b484d5c28e428ec83a919926c77b0472d36abc7"
