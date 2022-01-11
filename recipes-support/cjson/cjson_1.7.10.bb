DESCRIPTION = "Ultralightweight JSON parser in ANSI C"
HOMEPAGE = "https://github.com/DaveGamble/cJSON"
AUTHOR = "Dave Gamble"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=218947f77e8cb8e2fa02918dc41c50d0"

inherit cmake pkgconfig

PR = "r0"

SRC_URI = "\
    git://github.com/DaveGamble/cJSON.git;protocol=https \
"

SRCREV = "c69134d01746dcf551dd7724b4edb12f922eb0d1"

S = "${WORKDIR}/git"

FILES_${PN}-dev += "\
    ${libdir}/cmake \
"

EXTRA_OECMAKE += "\
    -DENABLE_CUSTOM_COMPILER_FLAGS=OFF \
    -DBUILD_SHARED_AND_STATIC_LIBS=On \
"
