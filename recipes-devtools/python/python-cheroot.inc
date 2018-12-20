DESCRIPTION = "Highly-optimized, pure-python HTTP server"
HOMEPAGE = "https://github.com/cherrypy/cheroot"
AUTHOR = "CherryPy Team"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=beeffd9dfcc746ed5a91921f1acc2746"

DEPENDS += "\
    ${PYTHON_PN}-setuptools-scm-native \
    ${PYTHON_PN}-setuptools-scm-git-archive-native \
"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-email \
    ${PYTHON_PN}-fcntl \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-unixadmin \
"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-pyopenssl \
    ${PYTHON_PN}-six \
"

PR = "r0"

SRC_URI[md5sum] = "3606d3101486791f198b72389ac99f4a"
SRC_URI[sha256sum] = "4fa28eef11bb7bb6a532fb0d51338ff631709e8527b7002d59edd4108f1e345a"
