DESCRIPTION = "Runtime inspection utilities for typing module."
HOMEPAGE = "https://github.com/ilevkivskyi/typing_inspect"
AUTHOR = "Ivan Levkivskyi"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=38939e40df14ccacab135b023198167a"

inherit pypi setuptools3

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-typing \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-mypy-extensions \
    ${PYTHON_PN}-typing-extensions \
"

PR = "r0"

SRC_URI[sha256sum] = "8f1b1dd25908dbfd81d3bebc218011531e7ab614ba6e5bf7826d887c834afab7"

PYPI_PACKAGE = "typing_inspect"
