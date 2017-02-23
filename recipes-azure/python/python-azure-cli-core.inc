DESCRIPTION = "Next generation multi-platform command line experience for Azure."

PV = "0.1.2rc2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-adal \
	${PYTHON_PN}-applicationinsights \
	${PYTHON_PN}-argcomplete \
	${PYTHON_PN}-azure-cli-nspkg \
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

SRCREV = "1a95ff279dc93947e03c4cde74a94d85ffbd8e49"

SRC_DIR = "src/azure-cli-core"
