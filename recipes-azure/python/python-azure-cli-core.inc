DESCRIPTION = "Next generation multi-platform command line experience for Azure."

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-adal \
	${PYTHON_PN}-applicationinsights \
	${PYTHON_PN}-argcomplete \
	${PYTHON_PN}-azure-mgmt-trafficmanager \
	${PYTHON_PN}-azure-mgmt-dns \
	${PYTHON_PN}-colorama \
	${PYTHON_PN}-jmespath \
	${PYTHON_PN}-msrest \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-pygments \
	${PYTHON_PN}-pyyaml \
	${PYTHON_PN}-requests \
	${PYTHON_PN}-six \
	${PYTHON_PN}-tabulate \
"

SRC_DIR = "src/azure-cli-core"
