DESCRIPTION = "Microsoft Azure Media Services Management Client Library for Python"

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

SRC_URI[md5sum] = "ec6bc49769378b1f4cae94da1c9bdc50"
SRC_URI[sha256sum] = "c7315ff0ee4d618fb38dca68548ef4023a7a20ce00efe27eb2105a5426237d86"