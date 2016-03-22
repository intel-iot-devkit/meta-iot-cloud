DESCRIPTION = "IBM Internet of Things Foundation Client for Python"
HOMEPAGE = "https://github.com/ibm-messaging/iot-python"
LICENSE = "ECL-1.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=8e63150e06ca345cebdd9a63642ac49d"

inherit setuptools

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

SRC_URI[md5sum] = "fb29e562fc9ed22fc926c0ed34e383be"
SRC_URI[sha256sum] = "330fca8e9b98f85620f0fa09e6e4b36deca92c14d34ace1bd586bcfe7391da3a"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
