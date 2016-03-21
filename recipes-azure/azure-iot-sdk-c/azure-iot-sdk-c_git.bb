DESCRIPTION = "Microsoft Azure IoT device SDK for C"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdks"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

inherit cmake pkgconfig

SRC_URI = "gitsm://github.com/Azure/azure-iot-sdks.git"
SRCREV = "${AUTOREV}"

PR = "r1"

S = "${WORKDIR}/git"

PACKAGES = "${PN}-staticdev ${PN}-dev"

do_recursive_submodule_init() {
	cd ${S}
	git submodule update --init --recursive
}

addtask recursive_submodule_init after do_unpack before do_configure

OECMAKE_SOURCEPATH = "${WORKDIR}/git/c"
EXTRA_OECMAKE = "-Dskip_unittests=ON -Duse_mqtt=OFF -Duse_http=OFF -Duse_amqp=OFF -Drun_e2e_tests=OFF"

FILES_${PN}-staticdev += "${libdir}/*"
FILES_${PN}-dev += "${includedir}/*"
