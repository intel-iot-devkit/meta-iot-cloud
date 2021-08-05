inherit cmake

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

sysroot_stage_all:append () {
    sysroot_stage_dir ${D}${exec_prefix}/cmake ${SYSROOT_DESTDIR}${exec_prefix}/cmake
}

FILES:${PN}-dev += "\
    ${exec_prefix}/cmake \
"

ALLOW_EMPTY:${PN} = "1"

BBCLASSEXTEND = "native nativesdk"
