DESCRIPTION = "Microsoft Azure Command-Line Interactive Shell"

PV = "0.3.10"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-applicationinsights \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-jmespath \
	${PYTHON_PN}-prompt-toolkit \
	${PYTHON_PN}-pyyaml \
	${PYTHON_PN}-six \
"

SRCREV = "d897a1578b8cb4ec1a614431d83dabc998e5302e"

SRC_DIR = "src/command_modules/azure-cli-interactive"
