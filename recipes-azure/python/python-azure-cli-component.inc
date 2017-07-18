DESCRIPTION = "Microsoft Azure Command-Line Tools Component Command Module"

LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=f74e59e099e328d80285c9eba6d4a53f"

PV = "2.0.6"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "0dd781dbcfc2abf331c025acd6e9ff2dc5975821"

SRC_DIR = "src/command_modules/azure-cli-component"
