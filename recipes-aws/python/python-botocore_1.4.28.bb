DESCRIPTION = "Low-level, data-driven core of boto 3."
HOMEPAGE = "https://github.com/boto/botocore"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=c2ca72265eb92b3fca5dfb60428bd071"

inherit setuptools

PR = "r0"

RDEPENDS_${PN} = "\
	${PYTHON_PN}-docutils \
	${PYTHON_PN}-dateutil \
	${PYTHON_PN}-jmespath \
	${PYTHON_PN}-six \
	${PYTHON_PN}-shell \
	${PYTHON_PN}-netserver \
	${PYTHON_PN}-email \
	${PYTHON_PN}-json \
	${PYTHON_PN}-numbers \
	${PYTHON_PN}-html\
"

SRC_NAME = "botocore"

SRC_URI = "git://github.com/boto/${SRC_NAME}.git"
SRCREV = "8087e8aec3e103cd192bbe25bfba831b26d09e45"

S = "${WORKDIR}/git"
