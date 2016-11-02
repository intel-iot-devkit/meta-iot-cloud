SUMMARY = "Provides cryptographic recipes and primitives to Python developers."
HOMEPAGE = "https://github.com/pyca/cryptography"
AUTHOR = "The Cryptography Developers"
LICENSE = "Apache-2.0 | BSD"
LIC_FILES_CHKSUM = "file://LICENSE;md5=8c3617db4fb6fae01f1d253ab91511e4"

PR = "r0"

SRC_NAME = "cryptography"

SRC_URI = "git://github.com/pyca/${SRC_NAME}.git;branch=1.5.x"
SRCREV = "cad77746539f504d53eb1bf9b278ec081ab8040a"

DEPENDS += " \
   	${PYTHON_PN}-cffi \
    	${PYTHON_PN}-cffi-native \
    	openssl \
    	libffi \
"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-cffi \
    ${PYTHON_PN}-idna \
    ${PYTHON_PN}-numbers \
    ${PYTHON_PN}-pyasn1 \
    ${PYTHON_PN}-pycparser \
    ${PYTHON_PN}-setuptools \
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-subprocess \
    ${PYTHON_PN}-threading \
"

S = "${WORKDIR}/git"

FILES_${PN}-dbg += "\
	${PYTHON_SITEPACKAGES_DIR}/${SRC_NAME}/hazmat/bindings/.debug \
"

BBCLASSEXTEND = "native nativesdk"
