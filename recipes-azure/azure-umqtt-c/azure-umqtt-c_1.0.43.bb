DESCRIPTION = "Microsoft Azure MQTT"
HOMEPAGE = "https://github.com/Azure/azure-umqtt-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=6e1bb384cedd6442b3a2b9a5b531e005"

DEPENDS = "azure-c-shared-utility"

inherit cmake

SRC_URI = "\
    git://github.com/Azure/azure-umqtt-c.git \
"
SRCREV = "b2b733ad7c7f609d4868c381f1d647abf431cbb0"

PR = "r0"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

PACKAGES = "\
    ${PN} \
    ${PN}-dev \
    ${PN}-dbg \
"

EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -Dskip_samples:BOOL=ON -Duse_installed_dependencies:BOOL=ON"

sysroot_stage_all_append () {
    sysroot_stage_dir ${D}${exec_prefix}/cmake ${SYSROOT_DESTDIR}${exec_prefix}/cmake

    # Fix CMake configs
    sed -i 's#${libdir}/libumqtt#${STAGING_LIBDIR}/libumqtt#g' ${SYSROOT_DESTDIR}${exec_prefix}/cmake/umqtt*
    sed -i 's#${includedir}/azureiot#${STAGING_INCDIR}/azureiot#g' ${SYSROOT_DESTDIR}${exec_prefix}/cmake/umqtt*
}

FILES_${PN} = "${libdir}/*.so"

FILES_${PN}-dev += "\
    ${includedir} \
    ${exec_prefix}/cmake \
"

FILES_${PN}-dbg += "${libdir}/.debug"

BBCLASSEXTEND = "native nativesdk"
