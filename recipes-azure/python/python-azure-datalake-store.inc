DESCRIPTION = "Azure Data Lake Store Filesystem Client Library for Python"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-data-lake-store-python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${WORKDIR}/${BPN}-${PV}-license;md5=8044bfe96e0a6b1824adf55d45c9873b"

PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-crypt \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-multiprocessing \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-pickle \
    ${PYTHON_PN}-shell \
    ${PYTHON_PN}-threading \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-adal \
    ${PYTHON_PN}-azure-nspkg \
    ${PYTHON_PN}-requests \
"

SRC_URI += "https://github.com/Azure/azure-data-lake-store-python/raw/v${PV}/License.txt;downloadfilename=${BPN}-${PV}-license;name=license"
SRC_URI[license.md5sum] = "8044bfe96e0a6b1824adf55d45c9873b"
SRC_URI[license.sha256sum] = "a1487fcf2dd5961c1a4cf240035b8ede59f2fef37edcb58c70eaed573e57a1d0"

SRC_URI[md5sum] = "53f6922549760564286563bfb5f82a3a"
SRC_URI[sha256sum] = "fa5d46c2538f2679872193f9de06b11c3db306dfdfa9217fc48507498fac7356"
