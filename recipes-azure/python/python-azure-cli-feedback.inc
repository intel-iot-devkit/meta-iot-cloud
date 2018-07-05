DESCRIPTION = "Microsoft Azure Command-Line Tools Feedback Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-applicationinsights \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-knack \
"

SRC_URI[md5sum] = "cdc445998b86cbe4deaea440ed05f6e6"
SRC_URI[sha256sum] = "f26e4a93111c29d02d5885fa29a7bfa5c65a7229ef33ed4153116403456ff9f7"