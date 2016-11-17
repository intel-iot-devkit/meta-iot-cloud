DESCRIPTION = "The nanomsg library is a simple high-performance implementation of several "scalability protocols"."
HOMEPAGE = "https://github.com/nanomsg/nanomsg"
AUTHOR = "Martin Sustrik"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://COPYING;md5=587b3fd7fd291e418ff4d2b8f3904755"

inherit cmake

PR = "r0"

SRC_URI = "git://github.com/nanomsg/nanomsg.git"
SRCREV = "7e12a20e038234060d41d03c20721d08117f8607"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "-DNN_TESTS:BOOL=OFF"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg ${PN}-tools"

FILES_${PN} = "\
	${libdir}/libnanomsg.so.* \
	${libdir}/pkgconfig \
"

FILES_${PN}-tools += "${bindir}/nanocat"
