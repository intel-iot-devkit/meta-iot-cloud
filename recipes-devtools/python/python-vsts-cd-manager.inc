DESCRIPTION = "Python wrapper around some of the VSTS APIs"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Microsoft/vsts-cd-manager"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${WORKDIR}/${BPN}-${PV}-license;md5=27e94c0280987ab296b0b8dd02ab9fe5"

PR = "r0"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-netclient \
"

SRC_URI += "https://github.com/Microsoft/vsts-cd-manager/raw/2649d236be94d119b13e0ac607964c94a9e51fde/LICENSE;downloadfilename=${BPN}-${PV}-license;name=license"
SRC_URI[license.md5sum] = "27e94c0280987ab296b0b8dd02ab9fe5"
SRC_URI[license.sha256sum] = "dea9265341829002e2c23a7372393eb2ed6e26085fb623f38a4ba0af833f30a6"

SRC_URI[md5sum] = "22919a67395dda301810b35263b82ac5"
SRC_URI[sha256sum] = "0bb09059cd553e1c206e92ef324cb0dcf92334846d646c44c684f6256b86447b"
