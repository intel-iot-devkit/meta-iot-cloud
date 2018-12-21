DESCRIPTION = "Python Client for Google Cloud DNS"

PV = "0.25.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-google-cloud-core \
"

SRCREV = "a42347aa26b0ebc8a6bede8d4f7b98f24018bb68"

SRC_DIR = "dns"
