DESCRIPTION = "Microsoft Azure Redis Cache Resource Management Client Library for Python"

PV = "4.1.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-common \
    ${PYTHON_PN}-msrestazure \
"

SRCREV = "dfc54251bcd5f1592fe86e1d5f630c10f0367178"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/redis/* \
    ${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_redis-* \
"

SRC_DIR = "azure-mgmt-redis"
