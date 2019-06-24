DESCRIPTION = "OISP Command Line Interface"
AUTHOR = "Intel"
HOMEPAGE = "https://github.com/Open-IoT-Service-Platform/oisp-cli"
LICENSE = "BSD-2-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=753cb46fee8d2addab0d40c31b2ff141"

inherit npm

ORGANIZATION = "open-iot-service-platform"
NPMPN = "${ORGANIZATION}-${BPN}"
NPM_INSTALLDIR = "${libdir}/node_modules/"
NPM_LOCKDOWN := "${THISDIR}/${BPN}/package-lock.json"
NPM_SHRINKWRAP := "${THISDIR}/${BPN}/npm-shrinkwrap.json"

SRC_URI = "\
    npm://registry.npmjs.org;name=@${ORGANIZATION}/${BPN};version=${PV} \
    file://config.json \
"

PR = "r0"

do_install_append() {
    # Copy config and create a symlink
    install -d ${D}${sysconfdir}/oisp
    install -m 0644 ${WORKDIR}/config.json ${D}${NPM_INSTALLDIR}/@${ORGANIZATION}/${BPN}/config/
    ln -s ${NPM_INSTALLDIR}/@${ORGANIZATION}/${BPN}/config/config.json ${D}${sysconfdir}/oisp/cli.json
}

FILES_${PN} += " \
    ${libdir}/node_modules/@${ORGANIZATION}/${BPN} \
    ${sysconfdir}/oisp \
"
