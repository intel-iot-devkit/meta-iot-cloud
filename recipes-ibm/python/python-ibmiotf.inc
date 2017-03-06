DESCRIPTION = "IBM Internet of Things Foundation Client for Python"
AUTHOR = "David Parker"
HOMEPAGE = "https://github.com/ibm-messaging/iot-python"
LICENSE = "EPL-1.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=30b3836521b3d65bef598bbc358a3afa"

PR = "r0"

RDEPENDS_${PN} = "\
	${PYTHON_PN}-json \
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-threading \
	${PYTHON_PN}-netclient \
	${PYTHON_PN}-distribute \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-iso8601 \
	${PYTHON_PN}-paho-mqtt \
	${PYTHON_PN}-pytz \
	${PYTHON_PN}-requests \
	${PYTHON_PN}-requests-toolbelt \
	${PYTHON_PN}-dicttoxml \
	${PYTHON_PN}-xmltodict \
"

SRC_URI = "git://github.com/ibm-watson-iot/iot-python.git"
SRCREV = "059f3798f1db9acc4fb106e6a848c60301e80891"

S = "${WORKDIR}/git"
