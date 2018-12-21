DESCRIPTION = "Microsoft Azure Container Instance Client Library for Python"

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

SRC_URI[md5sum] = "3af5d21e37a864523e4ad006c3bdb9ba"
SRC_URI[sha256sum] = "68c8150b5431752484b4933a6a15856b503068314b9d87ff99b03df3549bc92f"
