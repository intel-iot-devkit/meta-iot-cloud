DESCRIPTION = "Low-level, data-driven core of boto 3."
HOMEPAGE = "https://github.com/boto/botocore"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=2ee41112a44fe7014dce33e26468ba93"

SRC_URI[md5sum] = "2f2e4bff034f35005974c88f870c5e7d"
SRC_URI[sha256sum] = "d789f30a5def264b9d21a917aeadc4e5fc2b6a03a61f222befcfaf80eaba86e5"

inherit pypi

RDEPENDS_${PN} = "\
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
