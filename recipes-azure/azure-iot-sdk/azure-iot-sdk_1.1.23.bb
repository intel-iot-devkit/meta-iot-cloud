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
    git://github.com/Azure/azure-iot-sdk-python.git \
    git://github.com/Azure/azure-iot-sdk-c.git;destsuffix=c;name=c \
    git://github.com/kgabis/parson.git;destsuffix=parson;name=parson \
"

SRCREV = "db0785dc35aeee45fcc03b8fad2c0ccf57ca24d8"
SRCREV_c = "7b4f0dfaa100f1774e98d60336a04fec73debddb"
SRCREV_parson = "578b25e5909df0ca9fb78d5173a6b247faea0c5a"

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

do_submodules() {
	cp -rf ${WORKDIR}/c ${S}
	cp -rf ${WORKDIR}/parson ${S}/c/deps
}

addtask do_submodules after do_unpack before do_patch

do_install_append() {
	# Python
	if ${@bb.utils.contains('PACKAGECONFIG','python','true','false',d)}; then
		install -d ${D}${PYTHON_SITEPACKAGES_DIR}
		oe_libinstall -C ${OUTDIR}/python/src -so iothub_client ${D}${PYTHON_SITEPACKAGES_DIR}
		oe_libinstall -C ${OUTDIR}/python_service_client/src -so iothub_service_client ${D}${PYTHON_SITEPACKAGES_DIR}
		rm ${D}${libdir}/iothub_client.so
		rm ${D}${libdir}/iothub_service_client.so
	fi
}

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
