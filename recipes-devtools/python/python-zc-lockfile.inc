SUMMARY = "Basic inter-process locks"
AUTHOR = "Zope Foundation"
HOMEPAGE = "http://www.python.org/pypi/zc.lockfile"
LICENSE = "ZPL-2.1"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=78ccb3640dc841e1baecb3e27a6966b2"

PYPI_PACKAGE = "zc.lockfile"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-fcntl \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-logging \
"

PR = "r0"

SRC_URI[md5sum] = "6624ae27089c3c52894ade444d3655b1"
SRC_URI[sha256sum] = "96cb13769e042988ea25d23d44cf09342ea0f887083d0f9736968f3617665853"
