DESCRIPTION = "Azure IoT Hub Service Client Library"

include azure-iot-sdk-native.inc

PR = "r0"

RREPLACES_${PN} += "${PYTHON_PN}-azure-iot-sdk"
RCONFLICTS_${PN} += "${PYTHON_PN}-azure-iot-sdk"

do_install() {
    install -d ${D}${PYTHON_SITEPACKAGES_DIR}
    oe_libinstall -C ${B}/c/python_service_client/src -so iothub_service_client ${D}${PYTHON_SITEPACKAGES_DIR}
}

FILES_${PN} += "\
	${PYTHON_SITEPACKAGES_DIR}/*.so \
"
