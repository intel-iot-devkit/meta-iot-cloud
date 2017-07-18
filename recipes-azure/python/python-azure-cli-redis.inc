DESCRIPTION = "Microsoft Azure Command-Line Tools Redis Command Module"

PV = "0.2.7"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-redis \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "ab45e2ea0073f9af1e323a6af662d7e662df2d3a"

SRC_DIR = "src/command_modules/azure-cli-redis"
