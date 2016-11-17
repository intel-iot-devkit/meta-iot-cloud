DESCRIPTION = "uAMQP is a general purpose C library for AMQP"
HOMEPAGE = "https://github.com/Azure/azure-uamqp-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

DEPENDS = "azure-c-shared-utility"

inherit cmake pkgconfig

SRC_URI = "gitsm://github.com/Azure/azure-uamqp-c.git \
	   file://skip_build_deps_if_provided.patch \
"
SRCREV = "20691a19b040dfc97b70359c9e7d11b397ab3d02"

PR = "r0"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg"

SHARED_UTIL_INCLUDE_DIR = "${STAGING_INCDIR}/azureiot"

EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -Drun_e2e_tests:BOOL=OFF -Drun_longhaul_tests:BOOL=OFF -Dskip_unittests:BOOL=ON -Duse_wsio:BOOL=OFF -DSHARED_UTIL_INCLUDE_DIR=${SHARED_UTIL_INCLUDE_DIR}"

FILES_${PN} = "${libdir}/*.so"
FILES_${PN}-dev += "${includedir}"
FILES_${PN}-dbg += "${libdir}/.debug"
