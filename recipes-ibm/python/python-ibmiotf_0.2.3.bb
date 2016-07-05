DESCRIPTION = "IBM Internet of Things Foundation Client for Python"
HOMEPAGE = "https://github.com/ibm-messaging/iot-python"
LICENSE = "EPL-1.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=8e63150e06ca345cebdd9a63642ac49d"

inherit setuptools

PR = "r1"

RDEPENDS_${PN} = "\
	${PYTHON_PN}-requests \
	${PYTHON_PN}-paho-mqtt \
	${PYTHON_PN}-iso8601 \
	${PYTHON_PN}-pytz \
	${PYTHON_PN}-json \
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-threading \
	${PYTHON_PN}-netclient \
	${PYTHON_PN}-distribute \
"

SRC_NAME = "ibmiotf"

SRC_URI = "https://pypi.python.org/packages/source/i/${SRC_NAME}/${SRC_NAME}-${PV}.zip"
SRC_URI[md5sum] = "f6dc538da9b8f2e122a6bd0f407adcd1"
SRC_URI[sha256sum] = "959325559f09d38c67fec1bba99626278206c7ac90ba7b445d08ab86f45d4de2"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
