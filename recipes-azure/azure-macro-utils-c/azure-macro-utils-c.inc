inherit cmake

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

sysroot_stage_all_append () {
    sysroot_stage_dir ${D}${exec_prefix}/cmake ${SYSROOT_DESTDIR}${exec_prefix}/cmake
}

FILES_${PN}-dev += "\
    ${exec_prefix}/cmake \
"

ALLOW_EMPTY_${PN} = "1"

BBCLASSEXTEND = "native nativesdk"
