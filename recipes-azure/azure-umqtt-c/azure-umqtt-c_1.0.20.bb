DESCRIPTION = "Microsoft Azure MQTT"
HOMEPAGE = "https://github.com/Azure/azure-umqtt-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=6e1bb384cedd6442b3a2b9a5b531e005"

DEPENDS = "azure-c-shared-utility"

inherit cmake pkgconfig

SRC_URI = "\
	gitsm://github.com/Azure/azure-umqtt-c.git \
	file://Skip-building-dependencies-if-provided.patch \
"
SRCREV = "08d8e081aecb3c33d5ed20447c38dabe81f64e26"

PR = "r0"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg"

AZURE_INCLUDE_DIR = "${STAGING_INCDIR}/azureiot"

EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -Dskip_unittests:BOOL=ON -Dskip_samples:BOOL=ON -Duse_installed_dependencies:BOOL=ON -DAZURE_INCLUDE_DIR=${AZURE_INCLUDE_DIR}"

FILES_${PN} = "${libdir}/*.so"
FILES_${PN}-dev += "\
	${includedir} \
	${exec_prefix}/cmake \
"
FILES_${PN}-dbg += "${libdir}/.debug"
