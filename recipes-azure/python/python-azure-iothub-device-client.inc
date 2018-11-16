DESCRIPTION = "Azure IoT Hub Device Client Library"

include azure-iot-sdk-native.inc

PR = "r0"

EXTRA_OECMAKE += "\
    -Dbuild_service_client:BOOL=OFF \
    -Dskip_samples:BOOL=ON \
"

do_install() {
    install -d ${D}${PYTHON_SITEPACKAGES_DIR}
    oe_libinstall -C ${B}/c/python/src -so iothub_client ${D}${PYTHON_SITEPACKAGES_DIR}
}

FILES_${PN} += "\
	${PYTHON_SITEPACKAGES_DIR}/*.so \
"
