DESCRIPTION = "Microsoft Azure Command-Line Tools SQL Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-mgmt-sql \
	${PYTHON_PN}-azure-mgmt-storage \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "60c366a0d52af67ff4224cba2281903f"
SRC_URI[sha256sum] = "2b7a1edbe917b0d7e06c15636cd15b37fdbafc1e4c1f8b937fa75a88c0c7c6c6"