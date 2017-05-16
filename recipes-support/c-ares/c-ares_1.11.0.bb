SUMMARY = "c-ares is a C library that resolves names asynchronously."
HOMEPAGE = "http://daniel.haxx.se/projects/c-ares/"
SECTION = "libs"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://README.md;beginline=21;endline=26;md5=1a2f9887e30e5b2743478460268d2304"

SRC_URI = "git://github.com/c-ares/c-ares.git"
SRCREV = "2bae2d56d7866defcee18455c1f2ecfef6c7663d"

inherit autotools pkgconfig

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
