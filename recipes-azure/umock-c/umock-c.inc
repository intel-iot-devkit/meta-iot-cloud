inherit cmake

DEPENDS = "\
    azure-macro-utils-c \
"

SRC_URI += "\
    file://Always_link_macro_utils.patch \
"


S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

EXTRA_OECMAKE = "\
    -Duse_installed_dependencies:BOOL=ON \
"

sysroot_stage_all_append () {
    sysroot_stage_dir ${D}${exec_prefix}/cmake ${SYSROOT_DESTDIR}${exec_prefix}/cmake
}

FILES_${PN}-dev += "\
    ${exec_prefix}/cmake \
"

ALLOW_EMPTY_${PN} = "1"

BBCLASSEXTEND = "native nativesdk"
