DESCRIPTION = "Microsoft Azure Recovery Services Backup Management Client Library for Python"

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

SRC_URI[md5sum] = "43a18c623679fc5b5ebd1dbd053d4d65"
SRC_URI[sha256sum] = "1e55b6cbb808df83576cef352ba0065f4878fe505299c0a4c5a97f4f1e5793df"
