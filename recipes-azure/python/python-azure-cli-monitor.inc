DESCRIPTION = "Microsoft Azure Command-Line Tools Monitor Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-json \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-monitor \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-dateutil \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "456494a3a3384ee1dba3d78b781ce858"
SRC_URI[sha256sum] = "24cbd013003c684b65253828bebcddcbd482e53effce98830a24c353e74acbe8"