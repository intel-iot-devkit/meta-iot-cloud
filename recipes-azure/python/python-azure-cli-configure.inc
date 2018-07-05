DESCRIPTION = "Microsoft Azure Command-Line Tools Configure Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-adal \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "32a5827e41e1fe1a258cc4741066b328"
SRC_URI[sha256sum] = "7df91e62c38aae6f274f0d70f75b82016ad638e450a06e5e80501740f4eaa65b"