SUMMARY = "Python 2 and 3 compatibility utilities"
AUTHOR = "Benjamin Peterson"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=6f00d4a50713fa859858dd9abaa35b21"

PR = "r2"

SRC_NAME = "six"

SRC_URI = "https://pypi.python.org/packages/source/s/${SRC_NAME}/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "34eed507548117b2ab523ab14b2f8b55"
SRC_URI[sha256sum] = "105f8d68616f8248e24bf0e9372ef04d3cc10104f1980f54d57b2ce73a5ad56a"

S = "${WORKDIR}/${SRC_NAME}-${PV}"

BBCLASSEXTEND = "native nativesdk"
