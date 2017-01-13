DESCRIPTION = "uAMQP is a general purpose C library for AMQP"
HOMEPAGE = "https://github.com/Azure/azure-uamqp-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

DEPENDS = "azure-c-shared-utility"

inherit cmake pkgconfig

SRC_URI = "\
	gitsm://github.com/Azure/azure-uamqp-c.git \
	file://Skip-building-dependencies-if-provided.patch \
"
SRCREV = "6f1288aaaf53c601c75e6ab084065b3e65ded1fe"

PR = "r1"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg"

AZURE_INCLUDE_DIR = "${STAGING_INCDIR}/azureiot"

EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -Dskip_unittests:BOOL=ON -Duse_installed_dependencies:BOOL=ON -DAZURE_INCLUDE_DIR=${AZURE_INCLUDE_DIR}"

FILES_${PN} = "${libdir}/*.so"
FILES_${PN}-dev += "\
	${includedir} \
	${exec_prefix}/cmake \
"
FILES_${PN}-dbg += "${libdir}/.debug"
