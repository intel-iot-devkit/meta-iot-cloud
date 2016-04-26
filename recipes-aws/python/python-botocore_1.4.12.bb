DESCRIPTION = "Low-level, data-driven core of boto 3."
HOMEPAGE = "https://github.com/boto/botocore"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=c2ca72265eb92b3fca5dfb60428bd071"

inherit setuptools

PR = "r1"

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

SRC_URI = "https://github.com/boto/${SRC_NAME}/archive/${PV}.tar.gz"
SRC_URI[md5sum] = "efa853b83afa53089579b538a77f3a3e"
SRC_URI[sha256sum] = "1a135b691789ce4010e44ae4c612a8ba7d796617e54836af85ef61e4f36f21ac"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
