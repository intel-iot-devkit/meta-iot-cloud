inherit cmake

DEPENDS = "\
	curl \
	util-linux \
	openssl \
"

RDEPENDS_${PN} = "\
	util-linux-libuuid \
"

SRC_URI += "\
    file://Use-pkg-config-to-find-libs.patch \
    file://Fix-packaging-issues.patch \
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
	
	# Fix CMake configs
	sed -i 's#${exec_prefix}#\${_IMPORT_PREFIX}#g' ${SYSROOT_DESTDIR}${exec_prefix}/cmake/azure_c_shared_utility*
}

FILES_${PN}-dev += "\
	${exec_prefix}/cmake \
"

BBCLASSEXTEND = "native nativesdk"
