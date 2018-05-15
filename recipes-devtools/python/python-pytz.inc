SUMMARY = "World timezone definitions, modern and historical"
AUTHOR = "Stuart Bishop"
HOMEPAGE = " http://pythonhosted.org/pytz"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=39ea92752a35cf67d8a885d8e3af3c69"

RDEPENDS_${PN} += "\
    python-core \
    python-datetime \
"

PR = "r0"

SRC_NAME = "pytz"

SRC_URI = "https://pypi.python.org/packages/60/88/d3152c234da4b2a1f7a989f89609ea488225eaea015bc16fbde2b3fdfefa/${SRC_NAME}-${PV}.zip"
SRC_URI[md5sum] = "7006b56c0d68a162d9fe57d4249c3171"
SRC_URI[sha256sum] = "fae4cffc040921b8a2d60c6cf0b5d662c1190fe54d718271db4eb17d44a185b7"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
