inherit cmake pkgconfig

DEPENDS = "\
    azure-macro-utils-c \
    curl \
    openssl \
    umock-c \
    util-linux \
"

RDEPENDS:${PN} = "\
    util-linux-libuuid \
"

SRC_URI += "\
    file://0001-Fix-packaging-issues.patch \
    file://0002-Use-pkg-config-to-find-libs.patch \
    file://0003-Fix-include-paths.patch \
"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

EXTRA_OECMAKE = "\
    -Dbuild_as_dynamic:BOOL=ON \
    -Dskip_samples:BOOL=ON \
    -Duse_installed_dependencies:BOOL=ON \
    -Drun_unittests:BOOL=OFF \
"

sysroot_stage_all:append () {
    sysroot_stage_dir ${D}${exec_prefix}/cmake ${SYSROOT_DESTDIR}${exec_prefix}/cmake
}

FILES:${PN}-dev += "\
    ${exec_prefix}/cmake \
"

BBCLASSEXTEND = "native nativesdk"
