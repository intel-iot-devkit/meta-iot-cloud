DESCRIPTION = "SSH2 protocol library"
HOMEPAGE = "https://github.com/paramiko/paramiko/"
AUTHOR = "Jeff Forcier"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://LICENSE;md5=fd0120fc2e9f841c73ac707a30389af5"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-crypt \
    ${PYTHON_PN}-fcntl \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-shell \
    ${PYTHON_PN}-unixadmin \
"

# No support for GSS-API / SSPI and Ed25519 keys
RDEPENDS_${PN} += "\
    ${PYTHON_PN}-cryptography \
"

PR = "r0"

SRC_URI[md5sum] = "f9fa1204f706767b6c179effa7c0fb9e"
SRC_URI[sha256sum] = "33e36775a6c71790ba7692a73f948b329cf9295a72b0102144b031114bd2a4f3"