DESCRIPTION = "Microsoft Azure Command-Line Tools Storage Command Module"

PV = "0.1.1b2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-storage \
	${PYTHON_PN}-azure-mgmt-storage \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "de629f304095017b1de140dbfd0b295af999a6a6"

SRC_DIR = "src/command_modules/azure-cli-storage"
