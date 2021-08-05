inherit cmake

DEPENDS = "\
    azure-macro-utils-c \
"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

EXTRA_OECMAKE = "\
    -Duse_installed_dependencies:BOOL=ON \
"

sysroot_stage_all:append () {
    sysroot_stage_dir ${D}${exec_prefix}/cmake ${SYSROOT_DESTDIR}${exec_prefix}/cmake
}

FILES:${PN}-dev += "\
    ${exec_prefix}/cmake \
"

ALLOW_EMPTY:${PN} = "1"

BBCLASSEXTEND = "native nativesdk"
