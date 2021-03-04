DESCRIPTION = "Low-level, data-driven core of boto 3."
HOMEPAGE = "https://github.com/boto/botocore"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=71a3e14f29ac5c23e1b5b934ca4ddfc9"

SRC_URI[md5sum] = "1e3344b1bf2d94ab8f005d2a400de021"
SRC_URI[sha256sum] = "f802865c2fdffccc47a9843f4439ce0e36bc4e1bafc18fc9e79623212f7fa468"

inherit pypi

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-jmespath \
    ${PYTHON_PN}-dateutil \
    ${PYTHON_PN}-docutils \
    ${PYTHON_PN}-shell \
    ${PYTHON_PN}-netserver \
    ${PYTHON_PN}-email \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-numbers \
    ${PYTHON_PN}-html \
    ${PYTHON_PN}-urllib3 \
"
