DESCRIPTION = "This package provides a unified command line interface to Amazon Web Services."
HOMEPAGE = "https://github.com/aws/aws-cli"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=71a3e14f29ac5c23e1b5b934ca4ddfc9"

PR = "r0"

SRC_NAME = "aws-cli"

SRC_URI = "git://github.com/aws/${SRC_NAME}.git"
SRCREV = "59338c88372e5e15b57b438061d007dfeb0fbc3f"

S = "${WORKDIR}/git"
