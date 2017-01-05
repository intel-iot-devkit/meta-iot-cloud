DESCRIPTION = "Microsoft Azure IoT SDK for Python"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

inherit cmake python-dir

DEPENDS = "\
	${PYTHON_PN} \
	boost \
	azure-iot-sdk-c \
"

RDEPENDS_${PN} = "\
	${PYTHON_PN} \
	boost-python \
"

SRC_URI = "\
	git://github.com/Azure/azure-iot-sdk-python.git \
	file://0001-Use-provided-dependencies-if-available.patch \
	file://0002-Remove-unit-tests.patch \
	file://0003-Compile-as-C99.patch \
"
SRCREV = "26c4fdda93b35b425fac57883c24f6ae23c4377e"

PR = "r3"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"
AZURE_INCLUDE_DIR = "${STAGING_INCDIR}/azureiot"

# List of packages to build
PACKAGES = "\
	${PN} \
	${PN}-dbg \
"

## CMake ##
OECMAKE_SOURCEPATH = "${S}/device/iothub_client_python"
EXTRA_OECMAKE = "\
	-Dbuild_python:STRING=${PYTHON_BASEVERSION} \
	-DAZURE_INCLUDE_DIR=${AZURE_INCLUDE_DIR} \
"

do_install() {
	install -d ${D}${PYTHON_SITEPACKAGES_DIR}
	oe_libinstall -C ${B}/src -so iothub_client ${D}${PYTHON_SITEPACKAGES_DIR}
}

FILES_${PN} = "${PYTHON_SITEPACKAGES_DIR}/*.so"
FILES_${PN}-dbg += "${PYTHON_SITEPACKAGES_DIR}/.debug"

INSANE_SKIP_${PN} += "rpaths"
