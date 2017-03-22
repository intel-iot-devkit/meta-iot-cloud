DESCRIPTION = "The new features in unittest backported to Python 2.4+"
AUTHOR = "Robert Collins"
HOMEPAGE = "http://pypi.python.org/pypi/unittest2"
LICENSE = "CLOSED"

inherit setuptools

SRC_NAME = "unittest2"

SRC_URI = "https://pypi.python.org/packages/7f/c4/2b0e2d185d9d60772c10350d9853646832609d2f299a8300ab730f199db4/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "f72dae5d44f091df36b6b513305ea000"
SRC_URI[sha256sum] = "22882a0e418c284e1f718a822b3b022944d53d2d908e1690b319a9d3eb2c0579"

PR = "r0"

S = "${WORKDIR}/${SRC_NAME}-${PV}"

BBCLASSEXTEND = "native nativesdk"
