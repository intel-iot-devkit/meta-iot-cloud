DESCRIPTION = "HTTP Library written in C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-uhttp-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=b98fddd052bb2f5ddbcdbd417ffb26a8"

SRC_URI = "\
    git://github.com/Azure/azure-uhttp-c.git;branch=master;rev=ef8ba1591b0f825315b78380331ff9290197db02 \
"

PR = "r1"

require ${BPN}.inc
