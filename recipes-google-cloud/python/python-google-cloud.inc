DESCRIPTION = "API Client library for Google Cloud"

PV = "0.26.1"
PR = "r0"

RDEPENDS_${PN} = "\
    ${PYTHON_PN}-google-cloud-bigquery \
    ${PYTHON_PN}-google-cloud-bigtable \
    ${PYTHON_PN}-google-cloud-core \
    ${PYTHON_PN}-google-cloud-datastore \
    ${PYTHON_PN}-google-cloud-dns \
    ${PYTHON_PN}-google-cloud-error-reporting \
    ${PYTHON_PN}-google-cloud-language \
    ${PYTHON_PN}-google-cloud-logging \
    ${PYTHON_PN}-google-cloud-monitoring \
    ${PYTHON_PN}-google-cloud-pubsub \
    ${PYTHON_PN}-google-cloud-resource-manager \
    ${PYTHON_PN}-google-cloud-runtimeconfig \
    ${PYTHON_PN}-google-cloud-spanner \
    ${PYTHON_PN}-google-cloud-speech \
    ${PYTHON_PN}-google-cloud-storage \
    ${PYTHON_PN}-google-cloud-translate \
    ${PYTHON_PN}-google-cloud-videointelligence \
    ${PYTHON_PN}-google-cloud-vision \
"

SRC_DIR = ""
