DESCRIPTION = "Azure IoT Hub Provisioning Service Client Library"

include azure-iot-sdk.inc

PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-msrest \
"

S = "${WORKDIR}/git/provisioning_service_client"
