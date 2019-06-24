DESCRIPTION = "Microsoft Azure Data Lake Management Namespace Package"
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

SRC_URI[md5sum] = "bec8531c6e6314c017dc1c05fdd7d1bc"
SRC_URI[sha256sum] = "28b8774a1aba3e11c431f9c6cc984fde31a0ecbb89270924f392504f4260ca37"
