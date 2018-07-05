DESCRIPTION = "Microsoft Azure Command-Line Tools VM Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-distutils \
	${PYTHON_PN}-json \
	${PYTHON_PN}-netclient \
	${PYTHON_PN}-unixadmin \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argcomplete \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-keyvault \
	${PYTHON_PN}-azure-mgmt-authorization \
	${PYTHON_PN}-azure-mgmt-compute \
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-azure-mgmt-marketplaceordering \
	${PYTHON_PN}-azure-mgmt-msi \
	${PYTHON_PN}-azure-mgmt-network \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-mgmt-storage \
	${PYTHON_PN}-azure-multiapi-storage \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-requests \
	${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "56b84b2fcbfd4b183d3cfad1b6be9be1"
SRC_URI[sha256sum] = "aee065f9775912ee9be96883db35f445c6a1378a8cd8f478453b2d43ca322956"