DESCRIPTION = "An RPC library and framework"
AUTHOR = "Google Inc."
HOMEPAGE = "http://www.grpc.io"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=dc0d1d7d86350a5c51c835e3cea3f896"

inherit autotools-brokensep pkgconfig

DEPENDS = "\
	protobuf \
	zlib \
	openssl \
	c-ares \
"

SRC_URI = "gitsm://github.com/grpc/grpc.git;branch=v1.4.x"
SRCREV = "b108847dd613d324ebe69438171a8808ca030acc"

PR = "r0"

S = "${WORKDIR}/git"

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
