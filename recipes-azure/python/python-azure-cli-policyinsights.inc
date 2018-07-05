DESCRIPTION = "Microsoft Azure Command-Line Tools Policy Insights Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-policyinsights \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "0f04dd17ad50f09755a6d3ec05a3f7a5"
SRC_URI[sha256sum] = "796f839f7bdbc0c9e93a4d44efcf921efc35b53a180263888061b0f06ade0659"