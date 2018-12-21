DESCRIPTION = "Python Client for Google BigQuery"

PV = "0.25.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-google-cloud-core \
"

SRCREV = "d93921dc0d7f67eb91c198997314e28eebf79775"

SRC_DIR = "bigquery"
