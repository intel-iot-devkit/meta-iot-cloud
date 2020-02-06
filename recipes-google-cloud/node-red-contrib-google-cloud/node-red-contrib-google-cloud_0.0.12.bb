DESCRIPTION = "Node-RED nodes for Google Cloud Platform"
AUTHOR = "Cloud Partner Engineering"
HOMEPAGE = "https://github.com/GoogleCloudPlatform/node-red-contrib-google-cloud.git"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

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
