require grpc.inc
inherit autotools-brokensep pkgconfig

DEPENDS = "\
	protobuf \
	zlib \
	openssl \
	c-ares \
"

PR = "r0"

# Fix static library generation
AR += "rcs"

OUTDIR = "${S}/libs/opt/"

do_compile () {
	export LD="${CC}"
	oe_runmake prefix=${exec_prefix} shared_c static_c
}

do_install () {
	oe_runmake prefix=${D}${exec_prefix} install-headers_c

	oe_libinstall -C ${OUTDIR} -so libgpr ${D}${libdir}
	oe_libinstall -C ${OUTDIR} -so libgrpc ${D}${libdir}
	oe_libinstall -C ${OUTDIR} -so libgrpc_cronet ${D}${libdir}
	oe_libinstall -C ${OUTDIR} -so libgrpc_unsecure ${D}${libdir}

	install -d ${D}${libdir}/pkgconfig
	install -m 0644 ${OUTDIR}/pkgconfig/*.pc ${D}${libdir}/pkgconfig/
}

INSANE_SKIP_${PN} = "already-stripped rpaths"
