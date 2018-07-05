DESCRIPTION = "Microsoft Azure Service Fabric Command-Line Tools"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-json \
	${PYTHON_PN}-netclient \
	${PYTHON_PN}-threading \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-graphrbac \
	${PYTHON_PN}-azure-keyvault \
	${PYTHON_PN}-azure-mgmt-compute \
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-azure-mgmt-network \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-mgmt-servicefabric \
	${PYTHON_PN}-azure-mgmt-storage \
	${PYTHON_PN}-dateutil \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-pyopenssl \
"

SRC_URI[md5sum] = "2af72358bacab7274e7e1c534072b7e1"
SRC_URI[sha256sum] = "c8019f2293b0a388b72c487124c66058d2d79e0aa4acaef6be7efe6d37a1c217"