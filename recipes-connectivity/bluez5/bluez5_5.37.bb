require recipes-connectivity/bluez5/bluez5.inc

SRC_URI[md5sum] = "33177e5743e24b2b3738f72be64e3ffb"
SRC_URI[sha256sum] = "c14ba9ddcb0055522073477b8fd8bf1ddf5d219e75fdfd4699b7e0ce5350d6b0"

# to get bluetooth.conf
FILESEXTRAPATHS_prepend := "${THISDIR}/files/:"

SRC_URI = "\
    ${KERNELORG_MIRROR}/linux/bluetooth/bluez-${PV}.tar.xz \
    file://bluetooth.conf \
    file://obex_set_dbus_session_service.patch \
    file://0001-Run-bluetoothd-with-experimental-option.patch \
"

RDEPENDS_${PN} += "glibc-gconv-utf-16"

PACKAGECONFIG[alsa] = ""

EXTRA_OECONF += "\
  --enable-sixaxis \
  --enable-experimental \
"

do_install_append() {
	install -d ${D}${sysconfdir}/bluetooth/
	if [ -f ${S}/profiles/proximity/proximity.conf ]; then
	    install -m 0644 ${S}/profiles/proximity/proximity.conf ${D}/${sysconfdir}/bluetooth/
	fi
	if [ -f ${S}/src/main.conf ]; then
	    install -m 0644 ${S}/src/main.conf ${D}/${sysconfdir}/bluetooth/
	fi
	if [ -f ${S}/tools/obexctl ]; then
	    install -m 0755 ${S}/tools/obexctl ${D}${bindir}
	fi

	if ${@base_contains('DISTRO_FEATURES','systemd','true','false',d)}; then
		# Copy file service
		install -d ${D}/${systemd_unitdir}/system
		install -m 644 ${S}/obexd/src/obex.service ${D}/${systemd_unitdir}/system/
	fi
}

