DESCRIPTION = "Microsoft Azure Command-Line Tools Component Command Module"

LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=8119811f845dd3fd268c9a7a144793c5"

PV = "2.0.7"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "bc1055d1ada07c20f3068eda20f53fa0868bbda6"

SRC_DIR = "src/command_modules/azure-cli-component"
