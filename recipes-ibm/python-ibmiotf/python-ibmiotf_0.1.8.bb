DESCRIPTION = "IBM Internet of Things Foundation Client for Python"
HOMEPAGE = "https://github.com/ibm-messaging/iot-python"
AUTHOR = "Scott Ware"
LICENSE = "ECL-1.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=8e63150e06ca345cebdd9a63642ac49d"

inherit setuptools

SRCNAME = "ibmiotf"

RDEPENDS_${PN} += "${PYTHON_PN}-requests ${PYTHON_PN}-paho-mqtt ${PYTHON_PN}-iso8601 ${PYTHON_PN}-pytz"

SRC_URI = "https://pypi.python.org/packages/source/i/${SRCNAME}/${SRCNAME}-${PV}.zip"

SRC_URI[md5sum] = "4694ddd89f4a127ef32e090d77b54c70"
SRC_URI[sha256sum] = "13b38010a9ae0cd845c17f14bbc5d9fa68bbb15ef0f7805f222a0bd5277ea33b"

S = "${WORKDIR}/${SRCNAME}-${PV}"
