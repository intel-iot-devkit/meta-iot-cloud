DESCRIPTION = "Microsoft Azure Command-Line Tools Consumption Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-numbers \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-consumption \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "5e07fd1ae4d165eeb6cbba26f0c254ef"
SRC_URI[sha256sum] = "25ab9b185288d6c58a87b8589b6a4019cd314515b1a25643f1715dd05c55f312"