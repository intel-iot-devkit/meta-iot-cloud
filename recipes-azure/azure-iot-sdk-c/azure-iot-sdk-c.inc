inherit cmake

DEPENDS = "\
    azure-c-shared-utility \
    parson \
"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

PACKAGECONFIG ??= "amqp http mqtt"
PACKAGECONFIG[amqp] = "-Duse_amqp:BOOL=ON, -Duse_amqp:BOOL=OFF, azure-uamqp-c"
PACKAGECONFIG[edge] = "-Duse_edge_modules:BOOL=ON, -Duse_edge_modules:BOOL=OFF, azure-uhttp-c"
PACKAGECONFIG[http] = "-Duse_http:BOOL=ON, -Duse_http:BOOL=OFF, azure-uhttp-c"
PACKAGECONFIG[mqtt] = "-Duse_mqtt:BOOL=ON, -Duse_mqtt:BOOL=OFF, azure-umqtt-c"

EXTRA_OECMAKE = "\
    -Dbuild_as_dynamic:BOOL=ON \
    -Dskip_samples:BOOL=ON \
    -Duse_installed_dependencies:BOOL=ON \
    -Dbuild_service_client:BOOL=OFF \
    -Dbuild_provisioning_service_client:BOOL=OFF \
    -Drun_e2e_tests:BOOL=OFF \
    -Dhsm_type_sastoken:BOOL=OFF \
"

sysroot_stage_all:append () {
    sysroot_stage_dir ${D}${exec_prefix}/cmake ${SYSROOT_DESTDIR}${exec_prefix}/cmake
}

FILES:${PN}-dev += "\
    ${exec_prefix}/cmake \
"

BBCLASSEXTEND = "native nativesdk"
