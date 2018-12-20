SUMMARY = "TCP port monitoring utilities"
HOMEPAGE = "https://github.com/jaraco/portend"
AUTHOR = "Jason R. Coombs"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=a33f38bbf47d48c70fe0d40e5f77498e"

DEPENDS += "\
    ${PYTHON_PN}-setuptools-scm-native \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-io \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-tempora \
"

PR = "r0"

SRC_URI[md5sum] = "c1f36f2126da940ca5192dd1488b4f28"
SRC_URI[sha256sum] = "b7ce7d35ea262415297cbfea86226513e77b9ee5f631d3baa11992d663963719"
