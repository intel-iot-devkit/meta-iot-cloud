DESCRIPTION = "Pretty-print tabular data"
AUTHOR = "Sergey Astanin"
HOMEPAGE = "https://bitbucket.org/astanin/python-tabulate"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=395dcbe5757e4c4357e966c2f5b5d091"

SRC_NAME = "tabulate"

SRC_URI = "https://pypi.python.org/packages/1c/a1/3367581782ce79b727954f7aa5d29e6a439dc2490a9ac0e7ea0a7115435d/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "39a21aaa9c10be0749c545be34552559"
SRC_URI[sha256sum] = "83a0b8e17c09f012090a50e1e97ae897300a72b35e0c86c0b53d3bd2ae86d8c6"

PR = "r0"

S = "${WORKDIR}/${SRC_NAME}-${PV}"

BBCLASSEXTEND = "native nativesdk"
