inherit setuptools
require python-azure-mgmt-iothubprovisioningservices.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"