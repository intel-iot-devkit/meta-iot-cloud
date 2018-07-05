DESCRIPTION = "Microsoft Azure Command-Line Tools Service Bus Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-datetime \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-servicebus \
	${PYTHON_PN}-isodate \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-msrestazure \
"

SRC_URI[md5sum] = "1dabc45349d0572ef5715f4d2f687423"
SRC_URI[sha256sum] = "52cda908f8fb0927df3cf30da916028e21f642bd6d49323e55d7907ac4dce0c2"