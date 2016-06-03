DESCRIPTION = "cJSON aims to be the dumbest possible parser that you can get your job done with."
HOMEPAGE = "https://github.com/DaveGamble/cJSON"
AUTHOR = "Dave Gamble"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=ed85eba7edec076e4a49e6ee38b0e981"

inherit cmake

PR = "r0"

SRC_URI = "git://github.com/DaveGamble/cJSON.git"
SRCREV = "3a7bd6924a67c301b8811f521de6ed07c7cf0c3c"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "-DLIB_SUFFIX=${@d.getVar('baselib', True).replace('lib', '')}"

PACKAGES = "${PN} ${PN}-dev ${PN}-staticdev ${PN}-dbg"

FILES_${PN} += "${libdir}/*.so"
FILES_${PN}-dev += "${includedir}"
FILES_${PN}-staticdev += "${libdir}/*.a"
FILES_${PN}-dbg += "${libdir}/.debug"
