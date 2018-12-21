DESCRIPTION = "Microsoft Azure IoTHub Management Client Library for Python"

PR = "r0"

require azure-mgmt-common.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-common \
    ${PYTHON_PN}-msrestazure \
"

PYPI_PACKAGE_EXT = "zip"

inherit pypi

SRC_URI[md5sum] = "e5c76917183a6bb88eec224e9bfa9826"
SRC_URI[sha256sum] = "08388142ed6844f0a0e97d2740decf80ffc94f22adca174c15f60b9e2c2d14be"