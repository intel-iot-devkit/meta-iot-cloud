DESCRIPTION = "Azure IoT Provisioning Device Client Library"

include azure-iot-sdk.inc

PR = "r0"

do_install() {
    install -d ${D}${PYTHON_SITEPACKAGES_DIR}
    oe_libinstall -C ${B}/c/provisioning_device_client_python/src -so provisioning_device_client ${D}${PYTHON_SITEPACKAGES_DIR}
}

FILES_${PN} += "\
	${PYTHON_SITEPACKAGES_DIR}/*.so \
"
