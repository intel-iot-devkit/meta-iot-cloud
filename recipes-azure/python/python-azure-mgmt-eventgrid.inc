DESCRIPTION = "Microsoft Azure EventGrid Management Client Library for Python"

PV = "0.2.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-azure-common \
"

SRCREV = "7fc7eee139c7a413a3a6c76f4d9c00f93c202a4a"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/eventgrid/* \
    ${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_eventgrid-* \
"

SRC_DIR = "azure-mgmt-eventgrid"
