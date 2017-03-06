DESCRIPTION = "Next generation multi-platform command line experience for Azure."

PV = "2.0.0"
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

SRCREV = "061c247da51cc79f4cd136cf4b23bd58ddb0ca2e"

SRC_DIR = "src/azure-cli-core"
