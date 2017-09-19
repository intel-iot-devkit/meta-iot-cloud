DESCRIPTION = "Azure C Shared Utility"
HOMEPAGE = "https://github.com/Azure/azure-c-shared-utility"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

DEPENDS = "\
	curl \
	util-linux \
	openssl \
"

RDEPENDS_${PN} = "\
	util-linux-libuuid \
"

RDEPENDS_${PN}-dev += "\
	curl-dev \
	util-linux-dev \
	openssl-dev \
"

inherit cmake

SRC_URI = "git://github.com/Azure/azure-c-shared-utility.git"
SRCREV = "942909698415cc0bd6483e063a2cfa8da626edc6"

PR = "r0"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

PACKAGES = "\
	${PN} \
	${PN}-dev \
	${PN}-staticdev \
	${PN}-dbg \
"

EXTRA_OECMAKE = "-Dbuild_as_dynamic:BOOL=ON -Dskip_samples:BOOL=ON -Duse_installed_dependencies:BOOL=ON"

sysroot_stage_all_append () {
	sysroot_stage_dir ${D}${exec_prefix}/cmake ${SYSROOT_DESTDIR}${exec_prefix}/cmake

	# Fix CMake configs
	sed -i 's#${libdir}/libaziotsharedutil#${STAGING_LIBDIR}/libaziotsharedutil#g' ${SYSROOT_DESTDIR}${exec_prefix}/cmake/azure_c_shared_utility*
	sed -i 's#${includedir}/azureiot#${STAGING_INCDIR}/azureiot#g' ${SYSROOT_DESTDIR}${exec_prefix}/cmake/azure_c_shared_utility*
}

FILES_${PN} = "${libdir}/*.so"

FILES_${PN}-staticdev = "${libdir}/*.a"

FILES_${PN}-dev += "\
	${includedir} \
	${exec_prefix}/cmake \
"

FILES_${PN}-dbg += "${libdir}/.debug"

RRECOMMENDS_azure-c-shared-utility-dev[nodeprrecs] = "1"
