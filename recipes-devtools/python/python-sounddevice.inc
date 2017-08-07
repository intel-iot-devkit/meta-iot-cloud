SUMMARY = "Play and Record Sound with Python"
AUTHOR = "Matthias Geier"
HOMEPAGE = "http://python-sounddevice.readthedocs.io/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=a67c6303ee7c7985e972f580019004db"

RDEPENDS_${PN} += "\
	portaudio-v19 \
	${PYTHON_PN}-cffi \
"

PR = "r0"

SRC_URI = "git://github.com/spatialaudio/python-sounddevice.git"
SRCREV = "dcf9f7371343c239247ef1f6583559d4f4ff0912"

S = "${WORKDIR}/git"
