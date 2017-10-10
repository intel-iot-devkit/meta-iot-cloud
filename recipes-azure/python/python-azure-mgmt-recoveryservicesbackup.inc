DESCRIPTION = "Microsoft Azure Recovery Services Backup Client Library for Python"

PV = "0.1.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "667ba4048939fdc666bb0bee17f6fcc93dc01f5b"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/recoveryservicesbackup/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_recoveryservicesbackup-* \
"

SRC_DIR = "azure-mgmt-recoveryservicesbackup"
