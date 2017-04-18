DESCRIPTION = "Microsoft Azure Command-Line Tools IoT Command Module"

PV = "0.1.3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-iothub \
	${PYTHON_PN}-pyopenssl \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "9c72878d7d844e2482aa403f138c9f17e51bd671"

SRC_DIR = "src/command_modules/azure-cli-iot"
