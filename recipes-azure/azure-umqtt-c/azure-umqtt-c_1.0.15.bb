DESCRIPTION = "Microsoft Azure MQTT"
HOMEPAGE = "https://github.com/Azure/azure-umqtt-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=6e1bb384cedd6442b3a2b9a5b531e005"

DEPENDS = "azure-c-shared-utility"

inherit cmake pkgconfig

SRC_URI = "gitsm://github.com/Azure/azure-umqtt-c.git \
	   file://cmake_fixes.patch \
"
SRCREV = "3d3777f1b4cd515da987204deef02ebf71ea7c75"

PR = "r0"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg"

SHARED_UTIL_INCLUDE_DIR = "${STAGING_INCDIR}/azureiot"

EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -Dskip_unittests:BOOL=ON -DSHARED_UTIL_INCLUDE_DIR=${SHARED_UTIL_INCLUDE_DIR}"

FILES_${PN} = "${libdir}/*.so"
FILES_${PN}-dev += "${includedir}"
FILES_${PN}-dbg += "${libdir}/.debug"
