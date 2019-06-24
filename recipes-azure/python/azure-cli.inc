HOMEPAGE = "https://github.com/Azure/azure-cli"
AUTHOR = "Microsoft Corporation"
LICENSE = "MIT"
LIC_FILES_CHKSUM ?= "file://${WORKDIR}/${BPN}-${PV}-LICENSE;md5=8119811f845dd3fd268c9a7a144793c5"

CLI_VERSION = "2.0.38"

SRC_URI += "https://github.com/Azure/azure-cli/raw/azure-cli-${CLI_VERSION}/LICENSE.txt;downloadfilename=${BPN}-${PV}-LICENSE;name=license"
SRC_URI[license.md5sum] = "8119811f845dd3fd268c9a7a144793c5"
SRC_URI[license.sha256sum] = "8b55b98d200c7ae6f26bbce0e0dc47f9e66e0b633bce59eaca6e239cf56beddb"
