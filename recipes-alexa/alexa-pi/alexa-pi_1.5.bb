DESCRIPTION = "This is a client for Amazon's Alexa service."
AUTHOR = "AlexaPi Developers"
HOMEPAGE = "https://github.com/alexa-pi/AlexaPi"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=5c5f860bd5a8be2c5ff164136c27fbad"

inherit python-dir systemd

SRC_URI = "\
	git://github.com/alexa-pi/AlexaPi.git \
	file://alexa.service \
	file://alexa_config \
	file://0001-Generalise-authorisation-message.patch \
"

SRCREV = "9e0d20cd269ad5eb4f0d5f2c9ef89f0107c9c333"

RDEPENDS_${PN} = "\
	${PYTHON_PN} \
	${PYTHON_PN}-requests \
	${PYTHON_PN}-cherrypy \
	${PYTHON_PN}-vlc \
	${PYTHON_PN}-pyalsaaudio \
	${PYTHON_PN}-webrtcvad \
	${PYTHON_PN}-pyyaml \
	${PYTHON_PN}-pocketsphinx \
	${PYTHON_PN}-coloredlogs \
	${PYTHON_PN}-future \
"

RDEPENDS_${PN} += "\
	vlc \
	bash \
"

PR = "r3"

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
