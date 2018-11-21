DESCRIPTION = "Packages for Microsoft Azure IoT."
LICENSE = "MIT"

inherit packagegroup

<<<<<<< HEAD:recipes-core/packagegroups/packagegroup-cloud-azure_0.15.bb
PR = "r0"
=======
PR = "r3"
>>>>>>> 6fcb879... Azure: Fix support for Python 3.x:recipes-core/packagegroups/packagegroup-cloud-azure_0.12.bb

PACKAGES = "${PN}"

PACKAGECONFIG ??= "c python java node-red"

PACKAGECONFIG[c] = "\
	, \
	, \
	, \
	azure-iot-sdk-c \
	azure-iot-sdk-c-dev \
	azure-iot-edge \
	azure-iot-edge-dev \
	azure-iot-edge-modules \
	azure-iot-edge-samples \
"

PACKAGECONFIG[python] = "\
	, \
	, \
	, \
<<<<<<< HEAD:recipes-core/packagegroups/packagegroup-cloud-azure_0.15.bb
	${PYTHON_PN}-azure-iothub-device-client \
	${PYTHON_PN}-azure-iothub-service-client \
=======
	python-azure-iot-sdk \
	python-azure-cli \
"

PACKAGECONFIG[python3] = "\
	, \
	, \
	, \
	python3-azure-cli \
>>>>>>> 6fcb879... Azure: Fix support for Python 3.x:recipes-core/packagegroups/packagegroup-cloud-azure_0.12.bb
"

PACKAGECONFIG[java] = "\
	, \
	, \
	, \
	azure-iot-edge-java \
"

PACKAGECONFIG[node-red] = "\
	, \
	, \
	, \
	node-red-contrib-azureiothubnode \
"
