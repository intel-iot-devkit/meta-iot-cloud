inherit cmake

RPROVIDES_${PN} += "azure-iot-sdk"
RPROVIDES_${PN}-dev += "azure-iot-sdk-dev"

DEPENDS = "\
	azure-c-shared-utility \
	azure-uamqp-c \
	azure-umqtt-c \
"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

# List of packages to build
PACKAGES = "\
	${PN} \
	${PN}-dev \
	${PN}-dbg \
"

EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -Dskip_samples:BOOL=ON -Dskip_unittests:BOOL=ON -Duse_installed_dependencies:BOOL=ON"

sysroot_stage_all_append () {
	sysroot_stage_dir ${D}${exec_prefix}/cmake ${SYSROOT_DESTDIR}${exec_prefix}/cmake
}

FILES_${PN} = "${libdir}/*.so"

RDEPENDS_${PN}-dev = "\
	azure-iot-sdk-c \
	azure-umqtt-c-dev \
	azure-uamqp-c-dev \
	azure-c-shared-utility-dev \
"
FILES_${PN}-dev += "\
	${includedir} \
	${exec_prefix}/cmake \
"

FILES_${PN}-dbg += "\
	${libdir}/.debug \
"

RRECOMMENDS_azure-iot-sdk-dev[nodeprrecs] = "1"

BBCLASSEXTEND = "native nativesdk"
