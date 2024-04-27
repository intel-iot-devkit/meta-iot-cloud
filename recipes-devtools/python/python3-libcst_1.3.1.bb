DESCRIPTION = "A concrete syntax tree with AST-like properties for Python 3.0 through 3.12 programs."
HOMEPAGE = "https://github.com/Instagram/LibCST"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=bb0bb1a5e064e5019d855a2d28147544"

inherit python_setuptools3_rust cargo-update-recipe-crates

RDEPENDS:${PN} += "\
    python3-pyyaml \
"

require ${BPN}-crates.inc

PR = "r0"

SRC_URI += "\
    git://github.com/Instagram/LibCST.git;protocol=https;branch=main;tag=v${PV} \
"

S = "${WORKDIR}/git"

