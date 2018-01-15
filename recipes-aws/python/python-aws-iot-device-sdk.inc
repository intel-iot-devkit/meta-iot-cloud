DESCRIPTION = "SDK for connecting to AWS IoT from a device using Python."
HOMEPAGE = "https://github.com/aws/aws-iot-device-sdk-python"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=9ac49901b833e769c7d6f21e8dbd7b30"

PR = "r0"

PACKAGES = "${PN} ${PN}-samples"

SRC_NAME = "aws-iot-device-sdk-python"

SRC_URI = "git://github.com/aws/${SRC_NAME}.git;tag=v${PV}"

S = "${WORKDIR}/git"

do_install_append() {
	# Samples
	install -d ${D}${datadir}/awsiotsdk/samples/python
	cp -r ${S}/samples/* ${D}${datadir}/awsiotsdk/samples/python/
}

## Samples ##
FILES_${PN}-samples += "${datadir}/awsiotsdk/samples/python"
