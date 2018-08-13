DESCRIPTION = "Azure IoT Hub Device Client Library"

include azure-iot-sdk.inc

PR = "r0"

do_install() {
    install -d ${D}${PYTHON_SITEPACKAGES_DIR}
    oe_libinstall -C ${B}/c/python/src -so iothub_client ${D}${PYTHON_SITEPACKAGES_DIR}
}

FILES_${PN} += "\
	${PYTHON_SITEPACKAGES_DIR}/*.so \
"
