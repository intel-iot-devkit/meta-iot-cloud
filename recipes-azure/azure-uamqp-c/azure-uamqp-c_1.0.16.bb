DESCRIPTION = "Azure C Shared Utility"
HOMEPAGE = "https://github.com/Azure/azure-c-shared-utility"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

DEPENDS = "azure-c-shared-utility"
RDEPENDS_${PN} = ""

inherit cmake pkgconfig

SRC_URI = "gitsm://github.com/Azure/azure-uamqp-c.git \
	   file://cmake_fixes.patch \
"
SRCREV = "9b5f991757526472209f5da013f1deb805dd16d0"

PR = "r0"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg"

SHARED_UTIL_INCLUDE_DIR = "${STAGING_INCDIR}/azureiot"

EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -Drun_e2e_tests:BOOL=OFF -Drun_longhaul_tests:BOOL=OFF -Dskip_unittests:BOOL=ON -Duse_wsio:BOOL=OFF -Duse_openssl:BOOL=ON -DSHARED_UTIL_INCLUDE_DIR=${SHARED_UTIL_INCLUDE_DIR}"

FILES_${PN} = "${libdir}/*.so"
FILES_${PN}-dev += "${includedir}"
FILES_${PN}-dbg += "${libdir}/.debug"
