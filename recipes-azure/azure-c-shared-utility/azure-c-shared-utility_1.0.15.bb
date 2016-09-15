DESCRIPTION = "Azure C Shared Utility"
HOMEPAGE = "https://github.com/Azure/azure-c-shared-utility"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

DEPENDS = "curl"
RDEPENDS_${PN} = "libcrypto libssl util-linux-libuuid"

inherit cmake pkgconfig

SRC_URI = "git://github.com/Azure/azure-c-shared-utility.git \
	   file://cmake_lib_install.patch \
"
SRCREV = "75fa05efbb7e5b72f65fcc0d5c92eec030705f42"

PR = "r2"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg"

EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -Drun_valgrind:BOOL=OFF -Dskip_unittests:BOOL=ON -Duse_http:BOOL=ON -Duse_socketio:BOOL=ON -Duse_condition:BOOL=ON -Duse_openssl:BOOL=ON"

FILES_${PN} = "${libdir}/*.so"
FILES_${PN}-dev += "${includedir}"
FILES_${PN}-dbg += "${libdir}/.debug"

RRECOMMENDS_azure-c-shared-utility-dev = "glibc-dev util-linux-libuuid-dev libcurl-dev openssl-dev curl-dev cryptodev-linux-dev"
RRECOMMENDS_azure-c-shared-utility-dev[nodeprrecs] = "1"
