DESCRIPTION = "Microsoft Azure Service Fabric Management Client Library for Python"

PV = "0.1.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-azure-common \
"

SRCREV = "0f85f98b3faf44af19303d9724e9352f1c1e9114"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/servicefabric/* \
    ${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_servicefabric-* \
"

SRC_DIR = "azure-mgmt-servicefabric"
