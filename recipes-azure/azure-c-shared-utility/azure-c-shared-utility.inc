inherit cmake

DEPENDS = "\
    azure-macro-utils-c \
    curl \
    openssl \
    umock-c \
    util-linux \
"

RDEPENDS_${PN} = "\
    util-linux-libuuid \
"

SRC_URI += "\
    file://Fix-packaging-issues.patch \
    file://Use-pkg-config-to-find-libs.patch \
    file://0001-hmac.c-fix-compile-error-for-digest-pointer-vs-array.patch \
"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

EXTRA_OECMAKE = "\
    -Dbuild_as_dynamic:BOOL=ON \
    -Dskip_samples:BOOL=ON \
    -Duse_installed_dependencies:BOOL=ON \
    -Drun_unittests:BOOL=OFF \
"

sysroot_stage_all_append () {
    sysroot_stage_dir ${D}${exec_prefix}/cmake ${SYSROOT_DESTDIR}${exec_prefix}/cmake
}

FILES_${PN}-dev += "\
    ${exec_prefix}/cmake \
"

BBCLASSEXTEND = "native nativesdk"
