DESCRIPTION = "Microsoft Azure Command-Line Tools Resource Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-codecs \
	${PYTHON_PN}-io \
	${PYTHON_PN}-json \
	${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argcomplete \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-authorization \
	${PYTHON_PN}-azure-mgmt-managementgroups \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "ee018f69499f18bc348db2812217c215"
SRC_URI[sha256sum] = "e974bcbfb74cae7edb0fb74bc08a6673234b5994dbba84f6335dc6d308786421"