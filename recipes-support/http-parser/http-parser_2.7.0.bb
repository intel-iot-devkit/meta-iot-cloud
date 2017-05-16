SUMMARY = "Parser for HTTP messages written in C"
HOMEPAGE = "https://github.com/nodejs/http-parser"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE-MIT;md5=20d989143ee48a92dacde4f06bbcb59a"

SRC_URI = "git://github.com/nodejs/http-parser.git"
SRCREV = "9b0d5b33ebdaacff1dadd06bad4e198b11ff880e"

S = "${WORKDIR}/git"

do_configure[noexec] = "1"

do_compile() {
	oe_runmake
}

do_install() {
	oe_runmake LIBDIR=${D}${libdir} INCLUDEDIR=${D}${includedir} install
}

BBCLASSEXTEND = "native"
