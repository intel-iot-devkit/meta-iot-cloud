DESCRIPTION = "Microsoft Azure Command-Line Tools Component Command Module"

PV = "2.0.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "571e3dc93e65b77303c0da781d838647531a785f"

SRC_DIR = "src/command_modules/azure-cli-component"
