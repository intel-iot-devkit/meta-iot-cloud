DESCRIPTION = "Microsoft Azure Command-Line Interactive Shell"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-ctypes \
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-json \
	${PYTHON_PN}-math \
	${PYTHON_PN}-misc \
	${PYTHON_PN}-shell \
	${PYTHON_PN}-threading \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argcomplete \
	${PYTHON_PN}-applicationinsights \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-jmespath \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-prompt-toolkit \
	${PYTHON_PN}-pygments \
	${PYTHON_PN}-pyyaml \
	${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "7eb3121969c36523e827de5c4e5d5c04"
SRC_URI[sha256sum] = "03113729366dd76fc200fb69d8acf241ee2208e3172e05a85678b15278c09c7d"