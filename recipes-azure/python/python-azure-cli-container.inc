DESCRIPTION = "Microsoft Azure Command-Line Tools container Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-netclient \
	${PYTHON_PN}-shell \
	${PYTHON_PN}-terminal \
	${PYTHON_PN}-threading \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-containerinstance \
	${PYTHON_PN}-azure-mgmt-loganalytics \
	${PYTHON_PN}-colorama \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-pyyaml \
	${PYTHON_PN}-websocket-client \
"

SRC_URI[md5sum] = "9a97987ccde4faf867847a9e274ab3ee"
SRC_URI[sha256sum] = "37ad760951c43318ab251b7740abe5046c7b7c6f7b9b0ba8e15e419ced10ca58"
