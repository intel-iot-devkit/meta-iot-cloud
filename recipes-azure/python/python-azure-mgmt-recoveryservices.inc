DESCRIPTION = "Microsoft Azure Recovery Services Client Library for Python"

PV = "0.1.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "5a75672bf4c85dc73e6691b5a6f27928e470b1ec"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/recoveryservices/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_recoveryservices-* \
"

SRC_DIR = "azure-mgmt-recoveryservices"
