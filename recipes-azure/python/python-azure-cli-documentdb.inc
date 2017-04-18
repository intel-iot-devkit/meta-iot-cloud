DESCRIPTION = "Microsoft Azure Command-Line Tools DocumentDB Command Module"

PV = "0.1.3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-documentdb \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "99e8d2f38da5ce729b1f06026980ee93cc71eb37"

SRC_DIR = "src/command_modules/azure-cli-documentdb"
