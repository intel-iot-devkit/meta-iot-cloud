DESCRIPTION = "An Amazon S3 Transfer Manager"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=b1e01b26bacfc2232046c90a330332b3"

inherit setuptools

PR = "r0"

RDEPENDS_${PN} = "\
	${PYTHON_PN}-botocore \
	${PYTHON_PN}-futures \
	${PYTHON_PN}-math \
	${PYTHON_PN}-lang \
	${PYTHON_PN}-logging \
	${PYTHON_PN}-io \
	${PYTHON_PN}-threading \
	${PYTHON_PN}-stringold \
	${PYTHON_PN}-pkgutil \
"

SRC_NAME = "s3transfer"

SRC_URI = "git://github.com/boto/${SRC_NAME}.git"
SRCREV = "e9b5c6f9164f73146f01ccd0a15bdf9f02a5eec9"

S = "${WORKDIR}/git"
