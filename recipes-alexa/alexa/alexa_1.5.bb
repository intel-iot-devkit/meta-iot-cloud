DESCRIPTION = "This is a client for Amazon's Alexa service."
AUTHOR = "AlexaPi Developers"
HOMEPAGE = "https://github.com/alexa-pi/AlexaPi"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=5c5f860bd5a8be2c5ff164136c27fbad"

inherit systemd

SRC_URI = "\
    git://github.com/alexa-pi/AlexaPi.git \
    file://alexa.service \
    file://alexa_config \
    file://0001-Generalise-authorisation-message.patch \
    file://0002-Use-HTTPS-for-authentication.patch \
    file://0003-Change-default-playback-handler-to-sox.patch \
"

SRCREV = "9e0d20cd269ad5eb4f0d5f2c9ef89f0107c9c333"

RDEPENDS_${PN} = "\
    python \
    python-requests \
    python-cherrypy \
    python-pyalsaaudio \
    python-webrtcvad \
    python-pyyaml \
    python-pocketsphinx \
    python-coloredlogs \
    python-future \
"

RDEPENDS_${PN} += "\
    sox \
    bash \
    openssl \
"

RPROVIDES_${PN} += "alexa-pi"
RREPLACES_${PN} += "alexa-pi"
RCONFLICTS_${PN} += "alexa-pi"

PR = "r7"

PACKAGES = "${PN}"

S = "${WORKDIR}/git"

do_configure[noexec] = "1"
do_compile[noexec] = "1"

do_install() {
    install -d ${D}/opt/AlexaPi
    install -d ${D}/opt/AlexaPi/alexapi
    install -d ${D}/opt/AlexaPi/alexapi/device_platforms
    install -d ${D}/opt/AlexaPi/alexapi/playback_handlers
    install -d ${D}/opt/AlexaPi/alexapi/triggers
    install -d ${D}/opt/AlexaPi/resources

        install -m 0644 ${S}/src/*.py ${D}/opt/AlexaPi/
    install -m 0644 ${S}/src/*.yaml ${D}/opt/AlexaPi/
    install -m 0644 ${S}/src/alexapi/*.py ${D}/opt/AlexaPi/alexapi/
    install -m 0644 ${S}/src/alexapi/device_platforms/*.py ${D}/opt/AlexaPi/alexapi/device_platforms/
    install -m 0644 ${S}/src/alexapi/playback_handlers/*.py ${D}/opt/AlexaPi/alexapi/playback_handlers/
    install -m 0644 ${S}/src/alexapi/triggers/*.py ${D}/opt/AlexaPi/alexapi/triggers/
    install -m 0644 ${S}/src/resources/* ${D}/opt/AlexaPi/resources/

    install -d ${D}${bindir}
    install -m 0755 ${WORKDIR}/alexa_config ${D}${bindir}

    install -d ${D}${systemd_unitdir}/system
    install -m 0644 ${WORKDIR}/alexa.service ${D}${systemd_unitdir}/system
}

FILES_${PN} = "\
    ${bindir} \
    ${systemd_unitdir}/system \
    /opt/AlexaPi \
"

SYSTEMD_SERVICE_${PN} = "alexa.service"
SYSTEMD_AUTO_ENABLE ?= "disable"
