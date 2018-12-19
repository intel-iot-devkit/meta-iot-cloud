DESCRIPTION = "Bash tab completion for argparse"
AUTHOR = "Andrey Kislyuk"
HOMEPAGE = "https://github.com/kislyuk/argcomplete"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.rst;md5=2ee41112a44fe7014dce33e26468ba93"

PR = "r1"

SRC_NAME = "argcomplete"

SRC_URI = "git://github.com/kislyuk/${SRC_NAME}.git"
SRCREV = "5cd934c586ab2a4f4bbf831201b46c9ceeb855eb"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
