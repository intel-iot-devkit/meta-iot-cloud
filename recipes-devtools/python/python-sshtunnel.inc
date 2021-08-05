DESCRIPTION = "Pure python SSH tunnels"
HOMEPAGE = "https://github.com/pahaz/sshtunnel"
AUTHOR = "Pahaz Blinov"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=099ee2b925d98c72f52684df6fa3ac9f"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-netserver \
    ${PYTHON_PN}-threading \
    ${PYTHON_PN}-unixadmin \
"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-paramiko \
"

PR = "r0"

SRC_URI[md5sum] = "fb16cf0aec60451369ce23a0491c8b9b"
SRC_URI[sha256sum] = "f29ae41a1bd3afa64e9a31029bece2966e4be9a9641e8262372741e691c40d76"