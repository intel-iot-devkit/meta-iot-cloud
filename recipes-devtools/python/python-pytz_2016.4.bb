SUMMARY = "World timezone definitions, modern and historical"
HOMEPAGE = " http://pythonhosted.org/pytz"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=22b38951eb857cf285a4560a914b7cd6"

PR = "r0"

SRC_NAME = "pytz"

SRC_URI = "https://pypi.python.org/packages/ad/30/5ab2298c902ac92fdf649cc07d1b7d491a241c5cac8be84dd84464db7d8b/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "a3316cf3842ed0375ba5931914239d97"
SRC_URI[sha256sum] = "c823de61ff40d1996fe087cec343e0503881ca641b897e0f9b86c7683a0bfee1"

S = "${WORKDIR}/${SRC_NAME}-${PV}"

inherit setuptools

RDEPENDS_${PN} = "\
    python-core \
    python-datetime \
"
