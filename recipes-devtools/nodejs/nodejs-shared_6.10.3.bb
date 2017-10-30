require nodejs.inc

PR = "r1"

SRC_URI += "file://Do-not-build-thin-archive.patch"

EXTRA_OECONF += "--shared"

do_install () {
	install -d ${D}${libdir}
	oe_libinstall -C ${S}/out/Release/lib.target -so libnode ${D}${libdir}
	install -m 0644 ${S}/out/Release/obj.target/deps/v8/tools/gyp/*.a ${D}${libdir}
}

PACKAGES = "${PN} ${PN}-dev ${PN}-staticdev ${PN}-dbg"

FILES_${PN} = "${libdir}/*.so.*"
FILES_${PN}-dev = "${libdir}/*.so"
FILES_${PN}-staticdev = "${libdir}/*.a"
FILES_${PN}-dbg = "\
	${libdir}/.debug \
	${exec_prefix}/src/debug \
"
