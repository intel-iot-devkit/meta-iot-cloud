DESCRIPTION = "Microsoft Azure CDN Resource Management Client Library for Python"

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

SRC_URI[md5sum] = "338d3dd635d0023f663ea81c8ca16b5c"
SRC_URI[sha256sum] = "069774eb4b59b76ff9bd01708be0c8f9254ed40237b48368c3bb173f298755dd"
