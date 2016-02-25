DESCRIPTION = "This package provides a unified command line interface to Amazon Web Services."
HOMEPAGE = "https://github.com/aws/aws-cli"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=1b30762855ee41c1072f34f754f44c70"

inherit pypi

RDEPENDS_${PN} += "${PYTHON_PN}-docutils ${PYTHON_PN}-colorama ${PYTHON_PN}-botocore ${PYTHON_PN}-rsa ${PYTHON_PN}-s3transfer"

SRC_URI[md5sum] = "a656168d2d38dd7555c4cb7b7b7e005c"
SRC_URI[sha256sum] = "3b6ef8da43117e17527ad974ab89fb47c4a78f8a9a1b419e4b54c3e6da940f21"
