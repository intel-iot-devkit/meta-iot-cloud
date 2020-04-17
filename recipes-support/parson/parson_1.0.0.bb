DESCRIPTION = "Lightweight JSON library written in C"
HOMEPAGE = "https://github.com/kgabis/parson"
AUTHOR = "Krzysztof Gabis"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=70bfd7bcfaa1405d670f389a9b6a93c7"

inherit cmake pkgconfig

PR = "r0"

SRC_URI = "\
    git://github.com/kgabis/parson.git;rev=0341880552098dac91c3e675bc7a9721e0265288 \
"

S = "${WORKDIR}/git"

EXTRA_OECMAKE = "\
    -DBUILD_SHARED_LIBS:BOOL=ON \
"

FILES_${PN}-dev += "\
    ${libdir}/cmake \
"
