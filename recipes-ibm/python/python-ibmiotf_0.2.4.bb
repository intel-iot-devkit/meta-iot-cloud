DESCRIPTION = "IBM Internet of Things Foundation Client for Python"
HOMEPAGE = "https://github.com/ibm-messaging/iot-python"
LICENSE = "EPL-1.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=8e63150e06ca345cebdd9a63642ac49d"

inherit setuptools

PR = "r0"

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

SRC_URI = "https://github.com/ibm-watson-iot/iot-python/releases/download/${PV}/${SRC_NAME}-${PV}.zip"
SRC_URI[md5sum] = "8325b46d8e6d42367ee3541cce2e318c"
SRC_URI[sha256sum] = "c50c360a39028259cec7b65e22fdd53249daaf12143050f658fd566d7a7efdbb"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
