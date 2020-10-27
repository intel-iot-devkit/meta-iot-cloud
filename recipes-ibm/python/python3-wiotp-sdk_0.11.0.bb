DESCRIPTION = "Python SDK for IBM Watson IoT Platform"
AUTHOR = "David Parker"
HOMEPAGE = "https://github.com/ibm-watson-iot/iot-python"
LICENSE = "EPL-1.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=8e63150e06ca345cebdd9a63642ac49d"

inherit pypi setuptools3

PR = "r0"

RDEPENDS_${PN} = "\
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-pprint \
    ${PYTHON_PN}-threading \
    ${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-iso8601 \
    ${PYTHON_PN}-paho-mqtt \
    ${PYTHON_PN}-pytz \
    ${PYTHON_PN}-pyyaml \
    ${PYTHON_PN}-requests \
    ${PYTHON_PN}-requests-toolbelt \
"

SRC_URI[sha256sum] = "45160f8ee67d47a445bbf04e588c46bbcf7c32b90f1f813f8c680085d9bf344a"
