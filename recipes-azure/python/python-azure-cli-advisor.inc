DESCRIPTION = "Microsoft Azure Command-Line Tools Advisor Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-advisor \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-msrestazure \
"

SRC_URI[md5sum] = "8e07d1a329b794e68673f110e90e37c3"
SRC_URI[sha256sum] = "04aff2c92fe56bf3f1669b5f4638ad712b7d4cd2623a7fd4f41adee2ec0434dd"
