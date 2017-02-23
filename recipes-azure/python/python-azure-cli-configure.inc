DESCRIPTION = "Microsoft Azure Command-Line Tools Configure Command Module"

PV = "0.1.2rc2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "e37020bd11e00a074f692237aae5cf92ee0c1741"

SRC_DIR = "src/command_modules/azure-cli-configure"
