DESCRIPTION = "HTTP Library written in C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-uhttp-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=b98fddd052bb2f5ddbcdbd417ffb26a8"

SRC_URI = "\
	git://github.com/Azure/azure-uhttp-c.git \
"

SRCREV = "9c6abba99af896eff60a87e21074686b4640ff97"

PR = "r0"

require ${PN}.inc
require ${PN}-devkit.inc
