DESCRIPTION = "Microsoft Azure SDK for Python"
HOMEPAGE = "https://github.com/Azure/azure-sdk-for-python"
AUTHOR = "Microsoft Azure"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=7f7cc56311d298677f304d0ffce374d8"

PR = "r0"

PACKAGES = "${PN} ${PN}-batch ${PN}-common ${PN}-graphrbac ${PN}-mgmt ${PN}-mgmt-authorization ${PN}-mgmt-batch ${PN}-mgmt-cdn ${PN}-mgmt-cognitiveservices ${PN}-mgmt-commerce ${PN}-mgmt-compute ${PN}-mgmt-dns ${PN}-mgmt-iothub ${PN}-mgmt-keyvault ${PN}-mgmt-logic ${PN}-mgmt-network ${PN}-mgmt-notificationhubs ${PN}-mgmt-nspkg ${PN}-mgmt-powerbiembedded ${PN}-mgmt-redis ${PN}-mgmt-resource ${PN}-mgmt-scheduler ${PN}-mgmt-storage ${PN}-mgmt-trafficmanager ${PN}-mgmt-web ${PN}-nspkg ${PN}-servicebus ${PN}-servicemanagement-legacy"

SRC_NAME = "azure-sdk-for-python"

SRC_URI = "git://github.com/Azure/${SRC_NAME}.git"
SRCREV = "c0e7da5389a96b2ce17ea7813b8504381c377c80"

S = "${WORKDIR}/git"

RDEPENDS_${PN} = "\
	${PYTHON_PN}-azure-mgmt \
	${PYTHON_PN}-azure-batch \
	${PYTHON_PN}-azure-servicebus \
	${PYTHON_PN}-azure-storage \
	${PYTHON_PN}-azure-servicemanagement-legacy \
"
FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure-* \
"

RDEPENDS_${PN}-batch = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-batch = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/batch/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_batch-* \
"

RDEPENDS_${PN}-common = "\
	${PYTHON_PN}-azure-nspkg \
"
FILES_${PN}-common = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/common/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_common-* \
"

FILES_${PN}-graphrbac = "\
		${PYTHON_SITEPACKAGES_DIR}/azure/graphrbac/* \
		${PYTHON_SITEPACKAGES_DIR}/azure_graphrbac-* \
"

RDEPENDS_${PN}-mgmt = "\
	${PYTHON_PN}-azure-mgmt-batch \
	${PYTHON_PN}-azure-mgmt-redis \
	${PYTHON_PN}-azure-mgmt-logic \
	${PYTHON_PN}-azure-mgmt-scheduler \
	${PYTHON_PN}-azure-mgmt-compute \
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-azure-mgmt-network \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-mgmt-storage \
"
FILES_${PN}-mgmt = "\
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt-* \
"

RDEPENDS_${PN}-mgmt-authorization = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-authorization = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/authorization/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_authorization-* \
"

RDEPENDS_${PN}-mgmt-batch = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-batch = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/batch/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_batch-* \
"

RDEPENDS_${PN}-mgmt-cdn = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-cdn = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/cdn/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_cdn-* \
"

RDEPENDS_${PN}-mgmt-cognitiveservices = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-cognitiveservices = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/cognitiveservices/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_cognitiveservices-* \
"

RDEPENDS_${PN}-mgmt-commerce = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-commerce = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/commerce/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_commerce-* \
"

RDEPENDS_${PN}-mgmt-compute = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-compute = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/compute/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_compute-* \
"

RDEPENDS_${PN}-mgmt-compute = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-dns = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/dns/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_dns-* \
"

RDEPENDS_${PN}-mgmt-iothub = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-iothub = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/iothub/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_iothub-* \
"

RDEPENDS_${PN}-mgmt-keyvault = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-keyvault = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/keyvault/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_keyvault-* \
"

RDEPENDS_${PN}-mgmt-logic = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-logic = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/logic/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_logic-* \
"

RDEPENDS_${PN}-mgmt-network = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-network = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/network/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_network-* \
"

RDEPENDS_${PN}-mgmt-notificationhubs = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-notificationhubs = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/notificationhubs/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_notificationhubs-* \
"

RDEPENDS_${PN}-mgmt-nspkg = "\
	${PYTHON_PN}-azure-nspkg \
"
FILES_${PN}-mgmt-nspkg = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.py \
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.pyc \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_nspkg-* \
"

RDEPENDS_${PN}-mgmt-powerbiembedded = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-powerbiembedded = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/powerbiembedded/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_powerbiembedded-* \
"

RDEPENDS_${PN}-mgmt-redis = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-redis = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/redis/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_redis-* \
"

RDEPENDS_${PN}-mgmt-resource = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-resource = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/resource/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_resource-* \
"

RDEPENDS_${PN}-mgmt-scheduler = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-scheduler = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/scheduler/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_scheduler-* \
"

RDEPENDS_${PN}-mgmt-storage = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-storage = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/storage/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_storage-* \
"

RDEPENDS_${PN}-mgmt-trafficmanager = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-trafficmanager = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/trafficmanager/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_trafficmanager-* \
"

RDEPENDS_${PN}-mgmt-web = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"
FILES_${PN}-mgmt-web = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/web/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_web-* \
"

FILES_${PN}-nspkg = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/*.py \
	${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc \
	${PYTHON_SITEPACKAGES_DIR}/azure_nspkg-* \
"

RDEPENDS_${PN}-servicebus = "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-requests \
"
FILES_${PN}-servicebus = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/servicebus/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_servicebus-* \
"

RDEPENDS_${PN}-servicemanagement-legacy = "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-requests \
"
FILES_${PN}-servicemanagement-legacy = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/servicemanagement/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_servicemanagement_legacy-* \
"
