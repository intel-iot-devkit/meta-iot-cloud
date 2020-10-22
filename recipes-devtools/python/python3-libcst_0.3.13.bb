DESCRIPTION = "A concrete syntax tree with AST-like properties for Python 3.5, 3.6, 3.7 and 3.8 programs."
HOMEPAGE = "https://github.com/Instagram/LibCST"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=acf9a070872c4bc6e8cffc2e9fbd4b8e"

inherit pypi setuptools3

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-difflib \
    ${PYTHON_PN}-distutils \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-multiprocessing \
    ${PYTHON_PN}-threading \
    ${PYTHON_PN}-typing \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-pyyaml \
    ${PYTHON_PN}-typing-extensions \
    ${PYTHON_PN}-typing-inspect \
"

PR = "r0"

SRC_URI[sha256sum] = "dc89f56a04ab3fcf30d0a6d5ec6d5328eaed9c7e1f2f82ab91f15c07d9178ace"
