DESCRIPTION = "Python Client for Google Translate"

PV = "0.25.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-google-cloud-core \
"

SRCREV = "04ff662354d07d3cdf6d20d1e8bc31ae572c8167"

SRC_DIR = "translate"
