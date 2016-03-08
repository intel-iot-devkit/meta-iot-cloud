DESCRIPTION = "Low-level, data-driven core of boto 3."
HOMEPAGE = "https://github.com/boto/botocore"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=c2ca72265eb92b3fca5dfb60428bd071"

inherit pypi

RDEPENDS_${PN} += "${PYTHON_PN}-docutils ${PYTHON_PN}-dateutil ${PYTHON_PN}-jmespath ${PYTHON_PN}-shell ${PYTHON_PN}-netserver ${PYTHON_PN}-email ${PYTHON_PN}-json ${PYTHON_PN}-six ${PYTHON_PN}-numbers ${PYTHON_PN}-html"

SRC_URI[md5sum] = "4fd2a4fde58f07379494c94f58abfd0e"
SRC_URI[sha256sum] = "8368a1137d2f29dd536fe612f788f1cf0a7ad506427c85f3529363f03073dfd0"
