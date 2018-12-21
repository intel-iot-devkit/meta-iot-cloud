DESCRIPTION = "The nanomsg library is a simple high-performance implementation of several "scalability protocols"."
HOMEPAGE = "https://github.com/nanomsg/nanomsg"
AUTHOR = "Martin Sustrik"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://COPYING;md5=587b3fd7fd291e418ff4d2b8f3904755"

inherit cmake pkgconfig

PR = "r3"

SRC_URI = "\
    git://github.com/nanomsg/nanomsg.git \
    file://0001-Fix-libdir-in-pkgconfig-file.patch \
"
SRCREV = "ee99202f84f8d0e8ebd1c1722aa8a682f54919d0"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "-DNN_TESTS:BOOL=OFF"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg ${PN}-tools"

FILES_${PN} = "${libdir}/libnanomsg.so.*"
FILES_${PN}-dev += "${libdir}/pkgconfig"
FILES_${PN}-tools += "${bindir}/nanocat"
