DESCRIPTION = "Next generation multi-platform command line experience for Azure."

PR = "r0"

require azure-cli-common.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-acr \
	${PYTHON_PN}-azure-cli-acs \
	${PYTHON_PN}-azure-cli-advisor \
	${PYTHON_PN}-azure-cli-ams \
	${PYTHON_PN}-azure-cli-appservice \
	${PYTHON_PN}-azure-cli-batch \
	${PYTHON_PN}-azure-cli-batchai \
	${PYTHON_PN}-azure-cli-backup \
	${PYTHON_PN}-azure-cli-billing \
	${PYTHON_PN}-azure-cli-cdn \
	${PYTHON_PN}-azure-cli-cloud \
	${PYTHON_PN}-azure-cli-cognitiveservices \
	${PYTHON_PN}-azure-cli-container \
	${PYTHON_PN}-azure-cli-configure \
	${PYTHON_PN}-azure-cli-consumption \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-cli-cosmosdb \
	${PYTHON_PN}-azure-cli-dla \
	${PYTHON_PN}-azure-cli-dls \
	${PYTHON_PN}-azure-cli-dms \
	${PYTHON_PN}-azure-cli-eventgrid \
	${PYTHON_PN}-azure-cli-eventhubs \
	${PYTHON_PN}-azure-cli-extension \
	${PYTHON_PN}-azure-cli-feedback \
	${PYTHON_PN}-azure-cli-find \
	${PYTHON_PN}-azure-cli-interactive \
	${PYTHON_PN}-azure-cli-iot \
	${PYTHON_PN}-azure-cli-keyvault \
	${PYTHON_PN}-azure-cli-lab \
	${PYTHON_PN}-azure-cli-monitor \
	${PYTHON_PN}-azure-cli-network \
	${PYTHON_PN}-azure-cli-profile \
	${PYTHON_PN}-azure-cli-rdbms \
	${PYTHON_PN}-azure-cli-redis \
	${PYTHON_PN}-azure-cli-reservations \
	${PYTHON_PN}-azure-cli-resource \
	${PYTHON_PN}-azure-cli-role \
	${PYTHON_PN}-azure-cli-servicebus \
	${PYTHON_PN}-azure-cli-servicefabric \
	${PYTHON_PN}-azure-cli-sql \
	${PYTHON_PN}-azure-cli-storage \
	${PYTHON_PN}-azure-cli-vm \
"

SRC_URI[md5sum] = "2ceae5977ebdc062aadb865fd6b265ea"
SRC_URI[sha256sum] = "0bd41072edd6932228e2037b013b1b5111c6ad22d97fecc090908b945d380519"
