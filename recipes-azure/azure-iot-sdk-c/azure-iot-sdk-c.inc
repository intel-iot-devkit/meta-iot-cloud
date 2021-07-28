inherit cmake

PACKAGE_BEFORE_PN += "${PN}-samples"

DEPENDS = "\
    azure-c-shared-utility \
    parson \
"

SRC_URI += "\
    file://Fix-cmake-build-issues.patch \
    file://Use-provided-parson-lib.patch \
    file://0001-serializer-samples-Disable-devicetwin_simplesample.patch \
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
    -Dskip_samples:BOOL=OFF \
    -Duse_installed_dependencies:BOOL=ON \
    -Dbuild_service_client:BOOL=OFF \
    -Dbuild_provisioning_service_client:BOOL=OFF \
"

do_install_append() {
    # Install samples
    for sample in `find ${B} -perm 0755 -type f -path '*/samples/*'`; do
        if [ ! -e ${D}${bindir} ]; then
            install -m 0755 -d ${D}${bindir}
        fi
        install -m 0755 $sample ${D}${bindir}
    done
}

sysroot_stage_all_append () {
    sysroot_stage_dir ${D}${exec_prefix}/cmake ${SYSROOT_DESTDIR}${exec_prefix}/cmake
}

FILES_${PN}-dev += "\
    ${exec_prefix}/cmake \
"

FILES_${PN}-samples += " \
    ${bindir} \
"

BBCLASSEXTEND = "native nativesdk"
