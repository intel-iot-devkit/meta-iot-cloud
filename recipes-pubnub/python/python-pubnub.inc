DESCRIPTION = "PubNub Real-time push service in the cloud"
AUTHOR = "PubNub"
HOMEPAGE = "http://pubnub.com"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=075824fb5a6827c1707eff27a4b6a621"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-pycryptodome \
	${PYTHON_PN}-requests \
	${PYTHON_PN}-six \
"

SRC_URI = "git://github.com/pubnub/python.git"
SRCREV = "b8d5eaa4733a37245d765094bca68fbd74fa7e33"

S = "${WORKDIR}/git"
