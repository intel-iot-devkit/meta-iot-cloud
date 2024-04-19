DESCRIPTION = "Lightweight JSON library written in C"
HOMEPAGE = "https://github.com/kgabis/parson"
AUTHOR = "Krzysztof Gabis"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=5bbf3d18d8ed39559cb984dfe7c3a1ad"

inherit cmake pkgconfig

PR = "r0"

SRC_URI = "\
    git://github.com/kgabis/parson.git;protocol=https;branch=master;rev=ba29f4eda9ea7703a9f6a9cf2b0532a2605723c3 \
"

S = "${WORKDIR}/git"

EXTRA_OECMAKE = "\
    -DBUILD_SHARED_LIBS:BOOL=ON \
"

FILES:${PN}-dev += "\
    ${libdir}/cmake \
"
