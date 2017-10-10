DESCRIPTION = "Microsoft Azure Command-Line Tools Recovery Services Command Module"

PV = "1.0.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-recoveryservices \
	${PYTHON_PN}-azure-mgmt-recoveryservicesbackup \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "d8a12e1598e5413b080a133edbb06777b01cd79b"

SRC_DIR = "src/command_modules/azure-cli-backup"
