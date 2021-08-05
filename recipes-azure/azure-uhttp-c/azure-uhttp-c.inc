inherit cmake

DEPENDS = "\
    azure-c-shared-utility \
    azure-macro-utils-c \
    openssl \
"

SRC_URI += "\
    file://Fix-packaging-issues.patch \
"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

EXTRA_OECMAKE += "\
    -DBUILD_SHARED_LIBS:BOOL=ON \
    -Dskip_samples:BOOL=ON \
    -Duse_installed_dependencies:BOOL=ON \
    -Duse_openssl:BOOL=ON \
"

sysroot_stage_all:append () {
    sysroot_stage_dir ${D}${exec_prefix}/cmake ${SYSROOT_DESTDIR}${exec_prefix}/cmake
}

FILES:${PN}-dev += "\
    ${exec_prefix}/cmake \
"

BBCLASSEXTEND = "native nativesdk"
