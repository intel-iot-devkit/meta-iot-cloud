SUMMARY = "A multi-platform support library with a focus on asynchronous I/O"
HOMEPAGE = "https://github.com/libuv/libuv"
LICENSE = "MIT & BSD-2-Clause & BSD-3-Clause & ISC"
LIC_FILES_CHKSUM = "file://LICENSE;md5=30d33c8196b78acbed849e82bc3b6b18"

SRC_URI = "git://github.com/libuv/libuv.git"
SRCREV = "d989902ac658b4323a4f4020446e6f4dc449e25c"

inherit autotools

PR = "r0"

S = "${WORKDIR}/git"

do_configure() {
    ${S}/autogen.sh || bbnote "${BPN} failed to autogen.sh"
    oe_runconf
}

BBCLASSEXTEND = "native"
