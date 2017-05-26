DESCRIPTION = "Next generation multi-platform command line experience for Azure."

PV = "2.0.6"
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
	${PYTHON_PN}-pyopenssl \
	${PYTHON_PN}-pyyaml \
	${PYTHON_PN}-requests \
	${PYTHON_PN}-six \
	${PYTHON_PN}-tabulate \
"

SRCREV = "36114ebfdfb5d4aee275e436ab0c91ebef1afcd4"

SRC_DIR = "src/azure-cli-core"
