DESCRIPTION = "Microsoft Azure Command-Line Tools DevTestLabs Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-netclient \
	${PYTHON_PN}-unixadmin \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-graphrbac \
	${PYTHON_PN}-azure-mgmt-devtestlabs \
	${PYTHON_PN}-dateutil \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-paramiko \
"

SRC_URI[md5sum] = "3bea15ef0b9403c74242a4ce93401a74"
SRC_URI[sha256sum] = "b462987ef80b6154bb3e67464760f52ef08cc1749cd0406ba0749b3438559386"