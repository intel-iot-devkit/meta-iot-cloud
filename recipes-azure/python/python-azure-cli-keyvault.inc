DESCRIPTION = "Microsoft Azure Command-Line Tools Keyvault Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-json \
	${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-adal \
	${PYTHON_PN}-argcomplete \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-graphrbac \
	${PYTHON_PN}-azure-keyvault \
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-dateutil \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-pyopenssl \
"

SRC_URI[md5sum] = "cad6188105164d4120ec224e8d5240f8"
SRC_URI[sha256sum] = "5ff86e21d70c032bf942c465f4a5f09a6c4e840cbb8b7a1bb21301b8b6dd02c2"