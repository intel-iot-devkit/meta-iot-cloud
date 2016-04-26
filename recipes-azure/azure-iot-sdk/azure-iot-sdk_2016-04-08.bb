DESCRIPTION = "Microsoft Azure IoT device SDK"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdks"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

DEPENDS = "curl util-linux"
RDEPENDS_${PN} = "curl"

RPROVIDES_${PN}-python += "iothub_client.so"

inherit cmake pkgconfig python-dir

SRC_URI = "gitsm://github.com/Azure/azure-iot-sdks.git"
SRCREV = "0513e97aaf2ad36e134f0403d612da8118f16a8b"

PR = "r1"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg ${PN}-python ${PN}-python-dbg"

do_recursive_submodule_init() {
	export GIT_SSL_NO_VERIFY=1
	cd ${S}
	git submodule update --init --recursive
}

addtask recursive_submodule_init after do_unpack before do_configure

PACKAGECONFIG ??= "python"
PACKAGECONFIG[python] = "-Dbuild_python:STRING=ON, -Dbuild_python:STRING=OFF, ${PYTHON_PN} boost"

OECMAKE_SOURCEPATH = "${WORKDIR}/git/c"
EXTRA_OECMAKE = "-Drun_e2e_tests:BOOL=OFF -Drun_longhaul_tests=OFF -Duse_amqp:BOOL=ON -Duse_http:BOOL=ON -Duse_mqtt:BOOL=ON -Dskip_unittests:BOOL=ON -Dbuild_javawrapper:STRING=OFF"

do_install() {
    install -d ${D}${libdir}
    install -m 0644 ${B}/azure-c-shared-utility/*.a ${D}${libdir}
    install -m 0644 ${B}/azure-uamqp-c/*.a ${D}${libdir}
    install -m 0644 ${B}/azure-umqtt-c/*.a ${D}${libdir}
    install -m 0644 ${B}/iothub_client/*.a ${D}${libdir}
    install -m 0644 ${B}/serializer/*.a ${D}${libdir}

    install -d ${D}${includedir}/azureiotsdk
    install -m 0644 ${S}/c/iothub_client/inc/*.h ${D}${includedir}/azureiotsdk
    install -m 0644 ${S}/c/serializer/inc/*.h ${D}${includedir}/azureiotsdk

    # Python
    if [ -e ${B}/python/src/iothub_client.so ]; then
	install -d ${D}${PYTHON_SITEPACKAGES_DIR}
	oe_libinstall -C ${B}/python/src -so iothub_client ${D}${PYTHON_SITEPACKAGES_DIR}
    fi
}

FILES_${PN} += "${libdir}/*.a"
FILES_${PN}-dev += "${includedir}/*"
FILES_${PN}-python += "${PYTHON_SITEPACKAGES_DIR}/*.so"
FILES_${PN}-python-dbg += "${PYTHON_SITEPACKAGES_DIR}/.debug"

INSANE_SKIP_${PN} += "staticdev"
INSANE_SKIP_${PN}-python += "rpaths"
