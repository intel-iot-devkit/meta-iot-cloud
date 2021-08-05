FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

SRC_URI += "${@bb.utils.contains_any('PV', '1.1.1f 1.1.1g 1.1.1h', 'file://Fix-aarch64-static-linking-into-shared-libraries.patch', '', d)}"

