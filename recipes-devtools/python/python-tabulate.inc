DESCRIPTION = "Pretty-print tabular data in Python, a library and a command-line utility"
AUTHOR = "Sergey Astanin"
HOMEPAGE = "https://bitbucket.org/astanin/python-tabulate"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d66f6ca88dd4fcb1818a28e3c63c1d2e"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-wcwidth \
"

PR = "r0"

SRC_URI[md5sum] = "9bbaa53754356d837343740fdc70c074"
SRC_URI[sha256sum] = "e4ca13f26d0a6be2a2915428dc21e732f1e44dad7f76d7030b2ef1ec251cf7f2"