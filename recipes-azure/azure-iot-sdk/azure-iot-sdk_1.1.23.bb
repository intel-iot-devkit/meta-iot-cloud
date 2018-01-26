DESCRIPTION = "Microsoft Azure IoT SDKs and libraries for C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

inherit cmake

RPROVIDES_nativesdk-${PN} += "nativesdk-azure-iot-sdk-c"
RPROVIDES_nativesdk-${PN}-dev += "nativesdk-azure-iot-sdk-c-dev"
RPROVIDES_${PN} += "azure-iot-sdk-c"
RPROVIDES_${PN}-dev += "azure-iot-sdk-c-dev"

DEPENDS = "\
	azure-c-shared-utility \
	azure-uamqp-c \
	azure-umqtt-c \
"

SRC_URI = "\
	gitsm://github.com/Azure/azure-iot-sdk-python.git \
"
SRCREV = "db0785dc35aeee45fcc03b8fad2c0ccf57ca24d8"

PR = "r0"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

OUTDIR ?= "${B}"

# List of packages to build
PACKAGES = "\
	${PN} \
	${PN}-dev \
	${PN}-staticdev \
	${PN}-dbg \
"

## CMake ##
OECMAKE_SOURCEPATH = "${S}/c"
EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -Dskip_samples:BOOL=ON -Dskip_unittests:BOOL=ON -Duse_installed_dependencies:BOOL=ON"

sysroot_stage_all_append () {
	sysroot_stage_dir ${D}${exec_prefix}/cmake ${SYSROOT_DESTDIR}${exec_prefix}/cmake

	# Fix CMake configs
	sed -i 's#${libdir}#${STAGING_LIBDIR}#g' ${SYSROOT_DESTDIR}${exec_prefix}/cmake/azure_iot_sdksTargets*
	sed -i 's#${includedir}/azureiot#${STAGING_INCDIR}/azureiot#g' ${SYSROOT_DESTDIR}${exec_prefix}/cmake/azure_iot_sdksTargets*
}

FILES_${PN} = "${libdir}/*.so"

RDEPENDS_${PN}-dev = "\
	azure-iot-sdk \
	azure-umqtt-c-dev \
	azure-uamqp-c-dev \
	azure-c-shared-utility-dev \
"
FILES_${PN}-dev += "\
	${includedir} \
	${exec_prefix}/cmake \
"

FILES_${PN}-staticdev += "${libdir}/*.a"

FILES_${PN}-dbg += "\
	${libdir}/.debug \
"

RRECOMMENDS_azure-iot-sdk-dev[nodeprrecs] = "1"

BBCLASSEXTEND = "native nativesdk"
