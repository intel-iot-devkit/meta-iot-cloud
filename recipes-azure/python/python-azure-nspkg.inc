DESCRIPTION = "Microsoft Azure Namespace Package"
HOMEPAGE = "https://github.com/Azure/azure-sdk-for-python"
AUTHOR = "Microsoft Azure"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${WORKDIR}/LICENSE.txt;md5=7f7cc56311d298677f304d0ffce374d8"

PR = "r0"

PYPI_PACKAGE_EXT = "zip"

inherit pypi

SRC_URI += "https://github.com/Azure/azure-sdk-for-python/raw/azure_3.0.0/LICENSE.txt;name=license"
SRC_URI[license.md5sum] = "7f7cc56311d298677f304d0ffce374d8"
SRC_URI[license.sha256sum] = "7b7c80bf1253f5dabfe692633bd7908b6a44d1caba1ab2a776911b224e93f0fd"

SRC_URI[md5sum] = "2507ef1bf59830773a4a6534d4f6b314"
SRC_URI[sha256sum] = "fe19ee5d8c66ee8ef62557fc7310f59cffb7230f0a94701eef79f6e3191fdc7b"