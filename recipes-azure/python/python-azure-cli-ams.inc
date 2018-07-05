DESCRIPTION = "Microsoft Azure Command-Line Tools AMS Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-graphrbac \
	${PYTHON_PN}-azure-mgmt-authorization \
	${PYTHON_PN}-azure-mgmt-media \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-msrestazure \
"

SRC_URI[md5sum] = "63b30bda316516857341211a557c3747"
SRC_URI[sha256sum] = "03d478b73991c6aa24cc75dee80258df1281dd59844fe483d58dcad2da3ac99f"
