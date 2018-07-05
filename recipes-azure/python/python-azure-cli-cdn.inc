DESCRIPTION = "Microsoft Azure Command-Line Tools Content Delivery Network (CDN) Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-cdn \
	${PYTHON_PN}-knack \
"

SRC_URI[md5sum] = "e076baec2d0731178f11315d220527ac"
SRC_URI[sha256sum] = "c98d46125efed834e8aa1ff093198a5ddf79fc54dc64ab879a67bae504fad246"
