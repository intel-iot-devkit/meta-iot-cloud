DESCRIPTION = "Microsoft Azure Active Directory Authentication Library (ADAL) for Python"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/AzureAD/azure-activedirectory-library-for-python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://setup.py;beginline=2;endline=27;md5=43b81fae9d7baa1f0b1c9774a68ca33a"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-crypt \
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-threading \
    ${PYTHON_PN}-xml \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-requests \
    ${PYTHON_PN}-dateutil \
    ${PYTHON_PN}-pyjwt \
"

PR = "r0"

SRC_URI[md5sum] = "b8ce8ac5e0afccf8747ff780211380b6"
SRC_URI[sha256sum] = "71b0e9b479320f76af4bcd268f7359580ba2e217228e83ff7529f51a9845f393"
