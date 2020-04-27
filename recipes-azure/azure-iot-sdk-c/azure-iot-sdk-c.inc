inherit cmake

DEPENDS = "\
    azure-c-shared-utility \
    parson \
"

SRC_URI += "\
    file://Fix-cmake-build-issues.patch \
    file://Use-provided-parson-lib.patch \
"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

PACKAGECONFIG ??= "amqp mqtt http edge"
PACKAGECONFIG[amqp] = "-Duse_amqp:BOOL=ON, -Duse_amqp:BOOL=OFF, azure-uamqp-c"
PACKAGECONFIG[mqtt] = "-Duse_mqtt:BOOL=ON, -Duse_mqtt:BOOL=OFF, azure-umqtt-c"
PACKAGECONFIG[http] = "-Duse_http:BOOL=ON, -Duse_http:BOOL=OFF, azure-uhttp-c"
PACKAGECONFIG[edge] = "-Duse_edge_modules:BOOL=ON, -Duse_edge_modules:BOOL=OFF"

EXTRA_OECMAKE = "\
    -Dbuild_as_dynamic:BOOL=ON \
    -Dskip_samples:BOOL=ON \
    -Duse_installed_dependencies:BOOL=ON \
    -Dbuild_service_client:BOOL=OFF \
    -Dbuild_provisioning_service_client:BOOL=OFF \
"

# See solution at https://stackoverflow.com/a/59029698/1446624
do_configure_prepend() {
	cd ${S}
	git submodule update --init --recursive
}

sysroot_stage_all_append () {
    sysroot_stage_dir ${D}${exec_prefix}/cmake ${SYSROOT_DESTDIR}${exec_prefix}/cmake
}

FILES_${PN}-dev += "\
    ${exec_prefix}/cmake \
"

BBCLASSEXTEND = "native nativesdk"
