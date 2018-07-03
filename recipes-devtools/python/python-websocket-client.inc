DESCRIPTION = "WebSocket client for python. hybi13 is supported."
HOMEPAGE = "https://github.com/websocket-client/websocket-client.git"
AUTHOR = "liris"
SECTION = "devel/python"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4999ff812affd4e43e9848e8bfc732cb"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-crypt \
	${PYTHON_PN}-io \
	${PYTHON_PN}-logging \
	${PYTHON_PN}-netclient \
	${PYTHON_PN}-threading \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-six \
"

PYPI_PACKAGE = "websocket_client"

inherit pypi

SRC_URI[md5sum] = "a93c5992ce7ecee8fa97a318ef604923"
SRC_URI[sha256sum] = "18f1170e6a1b5463986739d9fd45c4308b0d025c1b2f9b88788d8f69e8a5eb4a"