DESCRIPTION = "Microsoft Azure Command-Line Tools ACS Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-io \
	${PYTHON_PN}-json \
	${PYTHON_PN}-math \
	${PYTHON_PN}-misc \
	${PYTHON_PN}-netclient \
	${PYTHON_PN}-threading \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argcomplete \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-authorization \
	${PYTHON_PN}-azure-mgmt-compute \
	${PYTHON_PN}-azure-mgmt-containerservice \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-graphrbac \
	${PYTHON_PN}-dateutil \
	${PYTHON_PN}-jmespath \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-paramiko \
	${PYTHON_PN}-pyyaml \
	${PYTHON_PN}-scp \
	${PYTHON_PN}-six \
	${PYTHON_PN}-sshtunnel \
"

SRC_URI[md5sum] = "69943bac21472e5cc13421917a7ff962"
SRC_URI[sha256sum] = "4f7c5472eb7c043faecc29c709b3d73bb6f55e4e7b06d18d2ffae3fe4ccde366"