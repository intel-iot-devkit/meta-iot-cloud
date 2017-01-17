DESCRIPTION = "Low-level, data-driven core of boto 3."
HOMEPAGE = "https://github.com/boto/botocore"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=71a3e14f29ac5c23e1b5b934ca4ddfc9"

PR = "r0"

RDEPENDS_${PN} = "\
	${PYTHON_PN}-jmespath \
	${PYTHON_PN}-dateutil \
	${PYTHON_PN}-docutils \
	${PYTHON_PN}-shell \
	${PYTHON_PN}-netserver \
	${PYTHON_PN}-email \
	${PYTHON_PN}-json \
	${PYTHON_PN}-numbers \
	${PYTHON_PN}-html\
"

SRC_NAME = "botocore"

SRC_URI = "git://github.com/boto/${SRC_NAME}.git"
SRCREV = "3f9a80f2985541e50609c50acf92732ed2a39c29"

S = "${WORKDIR}/git"
