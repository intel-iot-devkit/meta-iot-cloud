DESCRIPTION = "OISP Command Line Interface"
AUTHOR = "Intel"
HOMEPAGE = "https://github.com/Open-IoT-Service-Platform/oisp-cli"
LICENSE = "BSD-2-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=753cb46fee8d2addab0d40c31b2ff141"

inherit npm

ORGANIZATION = "open-iot-service-platform"

SRC_URI = "\
    npm://registry.npmjs.org;package=@${ORGANIZATION}/${BPN};version=${PV} \
    npmsw://${THISDIR}/${BPN}/npm-shrinkwrap.json \
"

PR = "r0"

S = "${WORKDIR}/npm"

OISP_CONFIG ?= "${S}/config/config.json.template"

do_install_append() {
    # Copy config and create a symlink
    install -d ${D}${sysconfdir}/oisp
    install -m 0644 ${OISP_CONFIG} ${D}/${libdir}/node_modules/@${ORGANIZATION}/${BPN}/config/config.json
    ln -s ${libdir}/node_modules/@${ORGANIZATION}/${BPN}/config/config.json ${D}/${sysconfdir}/oisp/cli.json
}

FILES_${PN} += " \
    ${libdir}/node_modules/@${ORGANIZATION}/${BPN} \
    ${sysconfdir}/oisp \
"