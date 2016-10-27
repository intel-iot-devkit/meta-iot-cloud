DESCRIPTION = "Bash tab completion for argparse"
AUTHOR = "Andrey Kislyuk"
HOMEPAGE = "https://github.com/kislyuk/argcomplete"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.rst;md5=2ee41112a44fe7014dce33e26468ba93"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argparse \
"

SRC_NAME = "argcomplete"

SRC_URI = "git://github.com/kislyuk/${SRC_NAME}.git"
SRCREV = "92df979d50e6ed64778252ba574033cc6f660550"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
