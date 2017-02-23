DESCRIPTION = "Microsoft Azure LogicApps Management Client Library for Python"

PV = "0.1.1"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "cc734a9a66209887da7b83960b3fd077cee8e0e4"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/media/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_media-* \
"

SRC_DIR = "azure-mgmt-media"
