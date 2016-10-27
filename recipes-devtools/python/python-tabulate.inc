DESCRIPTION = "Pretty-print tabular data"
AUTHOR = "Sergey Astanin"
HOMEPAGE = "https://bitbucket.org/astanin/python-tabulate"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=6016fe224b0bae2284037e384b0e9d4d"

SRC_NAME = "tabulate"

SRC_URI = "https://pypi.python.org/packages/db/40/6ffc855c365769c454591ac30a25e9ea0b3e8c952a1259141f5b9878bd3d/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "576e1f063b8e74dbfeda02d978564987"
SRC_URI[sha256sum] = "9071aacbd97a9a915096c1aaf0dc684ac2672904cd876db5904085d6dac9810e"

S = "${WORKDIR}/${SRC_NAME}-${PV}"

BBCLASSEXTEND = "native nativesdk"
