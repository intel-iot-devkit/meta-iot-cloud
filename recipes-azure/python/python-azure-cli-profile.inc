DESCRIPTION = "Microsoft Azure Command-Line Tools Profile Command Module"

PV = "2.0.3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-adal \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "eb8854f67f0d920d044b2df5496f121fd1145bcf"

SRC_DIR = "src/command_modules/azure-cli-profile"
