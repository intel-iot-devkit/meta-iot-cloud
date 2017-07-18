DESCRIPTION = "Next generation multi-platform command line experience for Azure."

PV = "2.0.11"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-adal \
	${PYTHON_PN}-applicationinsights \
	${PYTHON_PN}-argcomplete \
	${PYTHON_PN}-colorama \
	${PYTHON_PN}-humanfriendly \
	${PYTHON_PN}-jmespath \
	${PYTHON_PN}-msrest \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-paramiko \
	${PYTHON_PN}-pygments \
	${PYTHON_PN}-pyopenssl \
	${PYTHON_PN}-pyyaml \
	${PYTHON_PN}-requests \
	${PYTHON_PN}-six \
	${PYTHON_PN}-tabulate \
	${PYTHON_PN}-azure-cli-nspkg \
"

SRCREV = "a5ba65aaab5df70b39627b44b93e4f354dcd76d2"

SRC_DIR = "src/azure-cli-core"
