DESCRIPTION = "Microsoft Azure Redis Cache Resource Management Client Library for Python"

PV = "1.0.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "c0e7da5389a96b2ce17ea7813b8504381c377c80"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/redis/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_redis-* \
"

SRC_DIR = "azure-mgmt-redis"
