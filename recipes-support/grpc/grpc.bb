require grpc.inc
inherit autotools-brokensep

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg"

DEPENDS = "protobuf zlib openssl"

PR = "r0"

# Fix static library generation
AR += "rcs"

do_compile () {
	export LD="${CC}"
	oe_runmake prefix=${exec_prefix} shared_c
}

do_install () {
	oe_runmake prefix=${D}${exec_prefix} install-headers_c install-shared_c
}

INSANE_SKIP_${PN} = "already-stripped"