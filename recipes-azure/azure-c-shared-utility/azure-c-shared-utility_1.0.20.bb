DESCRIPTION = "Azure C Shared Utility"
HOMEPAGE = "https://github.com/Azure/azure-c-shared-utility"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

DEPENDS = "\
	curl \
	util-linux \
"

RDEPENDS_${PN} = "\
	libcrypto \
	libssl \
	util-linux-libuuid \
"

inherit cmake pkgconfig

SRC_URI = "git://github.com/Azure/azure-c-shared-utility.git;branch=ga_release_utility"
SRCREV = "bf0e1102cf3498e0999a1060ccc279fbef67c1dc"

PR = "r0"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg"

EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -Drun_valgrind:BOOL=OFF -Dskip_unittests:BOOL=ON -Duse_installed_dependencies:BOOL=ON"

FILES_${PN} = "${libdir}/*.so"
FILES_${PN}-dev += "\
	${includedir} \
	${exec_prefix}/cmake \
"
FILES_${PN}-dbg += "${libdir}/.debug"

RRECOMMENDS_azure-c-shared-utility-dev = "\
	glibc-dev \
	curl-dev \
	libcurl-dev \
	openssl-dev \
	util-linux-libuuid-dev \
	cryptodev-linux-dev \
"

RRECOMMENDS_azure-c-shared-utility-dev[nodeprrecs] = "1"
