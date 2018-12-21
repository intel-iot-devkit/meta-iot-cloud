inherit cmake

DEPENDS = "azure-c-shared-utility"

SRC_URI += "\
    file://Fix-packaging-issues.patch \
    file://Remove-unnecessary-includes-when-using-installed-dep.patch \
"

S = "${WORKDIR}/git"

PACKAGES = "\
    ${PN} \
    ${PN}-dev \
    ${PN}-dbg \
"

PACKAGECONFIG ??= "emulator"
PACKAGECONFIG[emulator] = "-Duse_emulator:BOOL=ON, -Duse_emulator:BOOL=OFF"

EXTRA_OECMAKE += "-DBUILD_SHARED_LIBS:BOOL=ON -Dskip_samples:BOOL=ON -Duse_installed_dependencies:BOOL=ON"

sysroot_stage_all_append () {
    sysroot_stage_dir ${D}${exec_prefix}/cmake ${SYSROOT_DESTDIR}${exec_prefix}/cmake
}

FILES_${PN}-dev += "\
    ${exec_prefix}/cmake \
"

BBCLASSEXTEND = "native nativesdk"
