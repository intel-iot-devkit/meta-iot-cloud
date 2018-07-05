DESCRIPTION = "Microsoft Azure Command-Line Tools for the Data Migration Service (DMS) Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-datamigration \
	${PYTHON_PN}-knack \
"

SRC_URI[md5sum] = "962b0afb937b6fcc5cfca2c80a179f17"
SRC_URI[sha256sum] = "34e0fb258ec2cfdbeae715e9f0624f673634b015c86c4067fe27e9bc6ce160df"