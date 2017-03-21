SUMMARY = "VLC bindings for python."
AUTHOR = "Olivier Aubert"
HOMEPAGE = "http://wiki.videolan.org/PythonBinding"
LICENSE = "LGPL-2.0"
LIC_FILES_CHKSUM = "file://COPYING;md5=4fbd65380cdd255951079008b364516c"

RDEPENDS_${PN} += "\
	libvlc \
"

PR = "r0"

SRC_URI = "git://github.com/oaubert/python-vlc.git"
SRCREV = "c1235908767573fb6629fb4e0b338bb4c41973af"

S = "${WORKDIR}/git"
