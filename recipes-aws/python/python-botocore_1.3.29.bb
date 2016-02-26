DESCRIPTION = "Low-level, data-driven core of boto 3."
HOMEPAGE = "https://github.com/boto/botocore"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=c2ca72265eb92b3fca5dfb60428bd071"

inherit pypi

RDEPENDS_${PN} += "${PYTHON_PN}-docutils ${PYTHON_PN}-dateutil ${PYTHON_PN}-jmespath ${PYTHON_PN}-shell ${PYTHON_PN}-netserver ${PYTHON_PN}-email ${PYTHON_PN}-json ${PYTHON_PN}-six ${PYTHON_PN}-numbers ${PYTHON_PN}-html"

SRC_URI[md5sum] = "0db9ecc398ead48caa9d98002428d951"
SRC_URI[sha256sum] = "05b17cadcadf6a5a70a9d3f45626135b7381c0d69b98c99fb0902594d37caefe"
