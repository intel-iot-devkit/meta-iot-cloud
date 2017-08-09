SUMMARY = "c-ares is a C library that resolves names asynchronously."
HOMEPAGE = "http://daniel.haxx.se/projects/c-ares/"
SECTION = "libs"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=f4b026880834eb01c035c5e5cb47ccac"

inherit autotools pkgconfig

SRC_URI = "https://c-ares.haxx.se/download/c-ares-${PV}.tar.gz"
SRC_URI[md5sum] = "2ca44be1715cd2c5666a165d35788424"
SRC_URI[sha256sum] = "8692f9403cdcdf936130e045c84021665118ee9bfea905d1a76f04d4e6f365fb"

PR = "r0"

BBCLASSEXTEND = "native nativesdk"
