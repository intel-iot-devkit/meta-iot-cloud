DESCRIPTION = "Fast, pure-Python full text indexing, search, and spell checking library."
HOMEPAGE = "http://bitbucket.org/mchaput/whoosh"
AUTHOR = "Matt Chaput"
SECTION = "devel/python"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=05303186defc6141143629961c7c8a60"

PR = "r0"

SRC_URI = "https://pypi.python.org/packages/25/2b/6beed2107b148edc1321da0d489afc4617b9ed317ef7b72d4993cad9b684/Whoosh-2.7.4.tar.gz"
SRC_URI[md5sum] = "c2710105f20b3e29936bd2357383c325"
SRC_URI[sha256sum] = "7ca5633dbfa9e0e0fa400d3151a8a0c4bec53bd2ecedc0a67705b17565c31a83"

S = "${WORKDIR}/Whoosh-${PV}"
