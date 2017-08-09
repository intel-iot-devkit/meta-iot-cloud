SUMMARY = "c-ares is a C library that resolves names asynchronously."
HOMEPAGE = "http://daniel.haxx.se/projects/c-ares/"
SECTION = "libs"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=f4b026880834eb01c035c5e5cb47ccac"

SRC_URI = "git://github.com/c-ares/c-ares.git"
SRCREV = "3be1924221e1326df520f8498d704a5c4c8d0cce"

inherit cmake pkgconfig

PR = "r0"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "-DCARES_STATIC:BOOL=ON -DCARES_SHARED:BOOL=ON"

FILES_${PN}-dev += "\
	${libdir}/cmake \
"

BBCLASSEXTEND = "native nativesdk"
