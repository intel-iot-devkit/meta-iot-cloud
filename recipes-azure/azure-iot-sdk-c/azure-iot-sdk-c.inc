inherit cmake

DEPENDS = "\
	azure-c-shared-utility \
"

SRC_URI += "\
    file://Compile-parson-into-main-libs.patch \
    file://Fix-cmake-build-issues.patch \
    file://Fix-missing-installed-libs.patch \
"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

do_unpack_extra(){
    rm -rf ${S}/c-utility
    rm -rf ${S}/umqtt
    rm -rf ${S}/uamqp
    rm -rf ${S}/deps/parson
    rm -rf ${S}/deps/uhttp
    
    ln -s ${WORKDIR}/c-utility ${S}
    ln -s ${WORKDIR}/umqtt ${S}
    ln -s ${WORKDIR}/uamqp ${S}
    ln -s ${WORKDIR}/parson ${S}/deps
    ln -s ${WORKDIR}/uhttp ${S}/deps
}
addtask unpack_extra after do_unpack before do_patch

PACKAGECONFIG ??= "amqp mqtt service_client"
PACKAGECONFIG[amqp] = "-Duse_amqp:BOOL=ON, -Duse_amqp:BOOL=OFF, azure-uamqp-c"
PACKAGECONFIG[mqtt] = "-Duse_mqtt:BOOL=ON, -Duse_mqtt:BOOL=OFF, azure-umqtt-c"
PACKAGECONFIG[service_client] = "-Dbuild_service_client:BOOL=ON, -Dbuild_service_client:BOOL=OFF"

EXTRA_OECMAKE = "\
	-Dbuild_as_dynamic:BOOL=ON \
	-Dskip_samples:BOOL=ON \
	-Duse_installed_dependencies:BOOL=ON \
"

sysroot_stage_all_append () {
	sysroot_stage_dir ${D}${exec_prefix}/cmake ${SYSROOT_DESTDIR}${exec_prefix}/cmake
}

FILES_${PN}-dev += "\
	${exec_prefix}/cmake \
"

BBCLASSEXTEND = "native nativesdk"
