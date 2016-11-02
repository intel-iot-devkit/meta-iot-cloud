DESCRIPTION = "An Amazon S3 Transfer Manager"
HOMEPAGE = "https://github.com/boto/s3transfer/"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=b1e01b26bacfc2232046c90a330332b3"

PR = "r0"

RDEPENDS_${PN} = "\
	${PYTHON_PN}-botocore \
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
SRCREV = "8ec5992a92021a3aa927ec1a07cb9b96055014dc"

S = "${WORKDIR}/git"
