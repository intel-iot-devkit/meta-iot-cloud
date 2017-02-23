DESCRIPTION = "Microsoft Azure Redis Cache Resource Management Client Library for Python"

PV = "4.0.0"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "da31bbd8e30770a7fe958780aebe885e40710347"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/redis/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_redis-* \
"

SRC_DIR = "azure-mgmt-redis"
