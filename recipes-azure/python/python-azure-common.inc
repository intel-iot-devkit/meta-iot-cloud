DESCRIPTION = "Microsoft Azure Client Library for Python (Common)"

PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-adal \
    ${PYTHON_PN}-msrest \
    ${PYTHON_PN}-msrestazure \
"

PYPI_PACKAGE_EXT = "zip"

inherit pypi

SRC_URI[md5sum] = "154fed7e6b8fd9111c7157e27c94d0dc"
SRC_URI[sha256sum] = "3f2b0a0325b22df43ae840399a0b23c0256cb4f7deadb506a335bad516034b54"
