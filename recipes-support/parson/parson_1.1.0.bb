DESCRIPTION = "Lightweight JSON library written in C"
HOMEPAGE = "https://github.com/kgabis/parson"
AUTHOR = "Krzysztof Gabis"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=14773547851b6ac335d3d7fb7707a021"

inherit cmake pkgconfig

PR = "r0"

SRC_URI = "\
    git://github.com/kgabis/parson.git;protocol=https;rev=102a4467e10c77ffcfde1d233798780acd719cc5 \
"

S = "${WORKDIR}/git"

EXTRA_OECMAKE = "\
    -DBUILD_SHARED_LIBS:BOOL=ON \
"

FILES:${PN}-dev += "\
    ${libdir}/cmake \
"
