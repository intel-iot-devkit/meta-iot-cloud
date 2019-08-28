DESCRIPTION = "Connect to IBM Watson Internet of Things Plaform as a Device or Gateway"
AUTHOR = "Nick O'Leary"
HOMEPAGE = "https://github.com/ibm-watson-iot/node-red-contrib-ibm-watson-iot"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=9812725859172d1c78fb60518d16fe64"

inherit npm

RDEPENDS_${PN} = "\
    bash \
    node-red \
"

SRC_URI = "npm://registry.npmjs.org;name=${BPN};version=${PV}"

PR = "r1"

NPMPN = "${BPN}"
NPM_LOCKDOWN := "${THISDIR}/${BPN}/package-lock.json"
NPM_SHRINKWRAP := "${THISDIR}/${BPN}/npm-shrinkwrap.json"
