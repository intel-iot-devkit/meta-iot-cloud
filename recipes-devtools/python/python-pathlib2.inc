SUMMARY = "Object-oriented filesystem paths"
AUTHOR = "Matthias C. M. Troffaes"
HOMEPAGE = "https://pypi.python.org/pypi/pathlib2/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.rst;md5=042856c23a3e903b33bf361ea1cbe29a"

PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-six \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-scandir \
"

SRC_URI = "git://github.com/mcmtroffaes/pathlib2.git;protocol=https;branch=develop"
SRCREV = "d9bb60c754137d5914ac275ffe66e1976e06bd2d"

S = "${WORKDIR}/git"
