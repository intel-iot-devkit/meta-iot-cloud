DESCRIPTION = "Microsoft Azure Service Fabric Management Client Library for Python"

PR = "r0"

require azure-mgmt-common.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-common \
    ${PYTHON_PN}-msrestazure \
"

PYPI_PACKAGE_EXT = "zip"

inherit pypi

SRC_URI[md5sum] = "4f48bfa17c96f0d302d3a6110c2ee189"
SRC_URI[sha256sum] = "9f7789bdc221fcf81608cc5a3e64f1d59d41c453ff1567cb81197b19a2cd6373"