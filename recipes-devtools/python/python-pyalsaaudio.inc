SUMMARY = "This package contains wrappers for accessing the ALSA API from Python. It is fairly complete for PCM devices and Mixer access."
AUTHOR = "Lars Immisch"
HOMEPAGE = "http://larsimmisch.github.io/pyalsaaudio/"
LICENSE = "PSF"
LIC_FILES_CHKSUM = "file://LICENSE;md5=1a3b161aa0fcec32a0c8907a2219ad9d"

PR = "r0"

RDEPENDS_${PN} += "\
	alsa-lib \
"

SRC_URI = "git://github.com/larsimmisch/pyalsaaudio.git"
SRCREV = "02cf16d10de879d563497a4ae2b9e354bd0d83ce"

S = "${WORKDIR}/git"
