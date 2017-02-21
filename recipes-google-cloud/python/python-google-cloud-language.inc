DESCRIPTION = "Python Client for Google Cloud Natural Language"

PV = "0.22.2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-google-cloud-core \
"

SRCREV = "7f7dc42a4b713cee5154ef62e18ebf964787d3c9"

SRC_DIR = "language"