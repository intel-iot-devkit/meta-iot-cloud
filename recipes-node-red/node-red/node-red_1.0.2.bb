DESCRIPTION = "Node-RED"
HOMEPAGE = "http://nodered.org"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d6f37569f5013072e9490d2194d10ae6"

inherit npm

PR = "r0"

SRC_URI = "\
    npm://registry.npmjs.org;name=${BPN};version=${PV} \
    file://${BPN}.service \
"

NPMPN = "${BPN}"
NPM_LOCKDOWN := "${THISDIR}/${BPN}/package-lock.json"
NPM_SHRINKWRAP := "${THISDIR}/${BPN}/npm-shrinkwrap.json"

do_install_append() {
    # Service
    install -d ${D}${systemd_unitdir}/system/
    install -m 0644 ${WORKDIR}/${BPN}.service ${D}${systemd_unitdir}/system/
    
    # Remove hardware specific files
    rm ${D}${bindir}/${BPN}-pi
    rm -rf ${D}${NPM_INSTALLDIR}/bin
}

inherit systemd

SYSTEMD_AUTO_ENABLE = "enable"
SYSTEMD_SERVICE_${PN} = "${BPN}.service"

FILES_${PN} += "\
    ${systemd_unitdir} \
"
