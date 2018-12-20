DESCRIPTION = "Pygments is a syntax highlighting package written in Python."
AUTHOR = "Georg Brandl"
HOMEPAGE = "http://pygments.org/"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE;md5=055b5a1a8d44f400965c04fa10a51596"

PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-compression \
    ${PYTHON_PN}-distutils \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-pprint \
    ${PYTHON_PN}-shell \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-chardet \
"

PYPI_PACKAGE = "Pygments"

inherit pypi

SRC_URI[md5sum] = "13037baca42f16917cbd5ad2fab50844"
SRC_URI[sha256sum] = "dbae1046def0efb574852fab9e90209b23f556367b5a320c0bcb871c77c3e8cc"