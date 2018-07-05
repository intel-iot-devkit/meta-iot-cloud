DESCRIPTION = "Microsoft Azure Command-Line Tools MySQL and PostgreSQL Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-datetime \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-rdbms \
	${PYTHON_PN}-dateutil \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "389ec8c0c0373fbca5bb67f573641aab"
SRC_URI[sha256sum] = "1acc3c30ec17de8c2d12b8360edb9da9af677da7dea99de9893dae2f48698b37"