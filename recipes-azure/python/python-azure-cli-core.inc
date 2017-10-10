DESCRIPTION = "Next generation multi-platform command line experience for Azure."

PV = "2.0.18"
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
	${PYTHON_PN}-pyjwt \
	${PYTHON_PN}-pyopenssl \
	${PYTHON_PN}-pyyaml \
	${PYTHON_PN}-requests \
	${PYTHON_PN}-six \
	${PYTHON_PN}-tabulate \
	${PYTHON_PN}-azure-cli-nspkg \
"

SRCREV = "eaae7c2d09bbb8ba0af55da58171d29d7b4e081d"

SRC_DIR = "src/azure-cli-core"
