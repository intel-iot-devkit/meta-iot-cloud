DESCRIPTION = "Microsoft Azure Graph RBAC Resource Management Client Library for Python"

PR = "r0"

require azure-sdk-common.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-common \
    ${PYTHON_PN}-msrestazure \
"

PYPI_PACKAGE_EXT = "zip"

inherit pypi

SRC_URI[md5sum] = "c356bece975d4611b2990596f2bf3731"
SRC_URI[sha256sum] = "f94b97bdcf774878fe2f8b8c46a5d6550a4ed891350ed0730c1561a24d488ee2"