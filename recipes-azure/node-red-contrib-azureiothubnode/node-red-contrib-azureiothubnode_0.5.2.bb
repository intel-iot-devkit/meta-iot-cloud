DESCRIPTION = "Node-Red node for Azure IoT Hub"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-node"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=854b7e0c8f4c0f85f53e20cdc2044564"

inherit npm

RDEPENDS_${PN} = "\
    bash \
    node-red \
"

SRC_URI = "\
    npm://registry.npmjs.org;package=${BPN};version=${PV} \
    npmsw://${THISDIR}/${BPN}/npm-shrinkwrap.json \
"

PR = "r0"

S = "${WORKDIR}/npm"
