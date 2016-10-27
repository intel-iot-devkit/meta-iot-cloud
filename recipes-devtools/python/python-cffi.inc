DESCRIPTION = "Foreign Function Interface for Python calling C code"
AUTHOR = "Armin Rigo, Maciej Fijalkowski"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=5677e2fdbf7cdda61d6dd2b57df547bf"

DEPENDS += "\
	libffi \
	${PYTHON_PN}-pycparser \
"

SRC_NAME = "cffi"

SRC_URI = "https://pypi.python.org/packages/0a/f3/686af8873b70028fccf67b15c78fd4e4667a3da995007afc71e786d61b0a/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "c8e877fe0426a99d0cf5872cf2f95b27"
SRC_URI[sha256sum] = "c321bd46faa7847261b89c0469569530cad5a41976bb6dba8202c0159f476568"

S = "${WORKDIR}/${SRC_NAME}-${PV}"

BBCLASSEXTEND = "native nativesdk"
