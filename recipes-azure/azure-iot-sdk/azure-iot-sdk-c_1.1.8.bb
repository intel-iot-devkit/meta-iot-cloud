DESCRIPTION = "Microsoft Azure IoT SDKs and libraries for C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

inherit cmake

DEPENDS = "\
	azure-c-shared-utility \
	azure-uamqp-c \
	azure-umqtt-c \
"

SRC_URI = "\
	gitsm://github.com/Azure/azure-iot-sdk-c.git \
"
SRCREV = "b71fb3651d7660551a2079b8c8a75b9803e2d7aa"

PR = "r0"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

# List of packages to build
PACKAGES = "\
	${PN} \
	${PN}-dev \
	${PN}-dbg \
"

## CMake ##
EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -Dskip_samples:BOOL=ON -Dskip_unittests:BOOL=ON -Duse_installed_dependencies:BOOL=ON"

sysroot_stage_all_append () {
	sysroot_stage_dir ${D}${exec_prefix}/cmake ${SYSROOT_DESTDIR}${exec_prefix}/cmake

	# Fix CMake configs
	sed -i 's#${libdir}#${STAGING_LIBDIR}#g' ${SYSROOT_DESTDIR}${exec_prefix}/cmake/azure_iot_sdksTargets*
	sed -i 's#${includedir}/azureiot#${STAGING_INCDIR}/azureiot#g' ${SYSROOT_DESTDIR}${exec_prefix}/cmake/azure_iot_sdksTargets*
}

FILES_${PN} = "${libdir}/*.so"
RDEPENDS_${PN}-dev += "azure-iot-sdk-c"
FILES_${PN}-dev += "\
	${includedir} \
	${exec_prefix}/cmake \
"
FILES_${PN}-dbg += "\
	${libdir}/.debug \
	/usr/src/debug \
"
