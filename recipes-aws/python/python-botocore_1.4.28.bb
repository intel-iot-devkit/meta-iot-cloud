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

SRC_URI = "https://github.com/boto/${SRC_NAME}/archive/${PV}.tar.gz"
SRC_URI[md5sum] = "bf1ef8f290c3bb1f86f45575d1bdbb76"
SRC_URI[sha256sum] = "2be3edd49980fbb4a69259f82dc865ab85f2cb1533f1ddc2d3d380d850dbf2b6"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
