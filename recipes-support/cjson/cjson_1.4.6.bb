DESCRIPTION = "Ultralightweight JSON parser in ANSI C"
HOMEPAGE = "https://github.com/DaveGamble/cJSON"
AUTHOR = "Dave Gamble"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=ed85eba7edec076e4a49e6ee38b0e981"

inherit cmake pkgconfig

PR = "r0"

SRC_URI = "\
	git://github.com/DaveGamble/cJSON.git \
	file://0001-Fix-pkgconfig-files.patch \
	file://0001-tests-parse_hex4-Fix-GCC-7-compiler-warning-fixes-17.patch \
"

SRCREV = "99db5db9a4384cfa4c65ce4b6471005bfd0f8013"

S = "${WORKDIR}/git"

FILES_${PN}-dev += "\
	${libdir}/cmake \
"
