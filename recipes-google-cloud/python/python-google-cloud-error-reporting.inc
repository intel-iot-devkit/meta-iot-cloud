DESCRIPTION = "Python Client for Stackdriver Error Reporting"

PV = "0.25.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-google-cloud-core \
    ${PYTHON_PN}-google-cloud-logging \
    ${PYTHON_PN}-gapic-google-cloud-error-reporting-v1beta1 \
"

SRCREV = "9238a26dc36b516ba9d5598504ed0fa5655ec94e"

SRC_DIR = "error_reporting"
