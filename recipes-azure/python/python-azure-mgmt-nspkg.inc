DESCRIPTION = "Microsoft Azure Resource Management Namespace Package"
HOMEPAGE = "https://github.com/Azure/azure-sdk-for-python"
AUTHOR = "Microsoft Azure"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${WORKDIR}/${BPN}-${PV}-license;md5=7f7cc56311d298677f304d0ffce374d8"

PR = "r0"

PYPI_PACKAGE_EXT = "zip"

inherit pypi

SRC_URI += "https://github.com/Azure/azure-sdk-for-python/raw/azure_3.0.0/LICENSE.txt;downloadfilename=${BPN}-${PV}-license;name=license"
SRC_URI[license.md5sum] = "7f7cc56311d298677f304d0ffce374d8"
SRC_URI[license.sha256sum] = "7b7c80bf1253f5dabfe692633bd7908b6a44d1caba1ab2a776911b224e93f0fd"

SRC_URI[md5sum] = "dc751917eebb5e8a9059f0de9e52d121"
SRC_URI[sha256sum] = "e36488d4f5d7d668ef5cc3e6e86f081448fd60c9bf4e051d06ff7cfc5a653e6f"
