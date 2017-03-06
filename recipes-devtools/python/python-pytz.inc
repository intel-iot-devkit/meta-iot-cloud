SUMMARY = "World timezone definitions, modern and historical"
AUTHOR = "Stuart Bishop"
HOMEPAGE = " http://pythonhosted.org/pytz"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=22b38951eb857cf285a4560a914b7cd6"

RDEPENDS_${PN} = "\
    python-core \
    python-datetime \
"

PR = "r0"

SRC_NAME = "pytz"

SRC_URI = "https://pypi.python.org/packages/42/00/5c89fc6c9b305df84def61863528e899e9dccb196f8438f6cbe960758fc5/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "cc9f16ba436efabdcef3c4d32ae4919c"
SRC_URI[sha256sum] = "9a43e20aa537cfad8fe7a1715165c91cb4a6935d40947f2d070e4c80f2dcd22b"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
