DESCRIPTION = "Command-line interface for Google Cloud Platform products and services"
HOMEPAGE = "https://cloud.google.com/sdk/"
AUTHOR = "Google Cloud Platform"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d02c4ee3b2a6ba87eea7b6756fd43895"

SRC_URI = "https://dl.google.com/dl/cloudsdk/channels/rapid/downloads/${BPN}-${PV}-linux-x86_64.tar.gz"
SRC_URI[md5sum] = "ce86d11789ed3be8d44e9f5b7d3e915a"
SRC_URI[sha256sum] = "d39293914b2e969bfe18dd19eb77ba96d283995f8cf1e5d7ba6ac712a3c9479a"

PR = "r0"

S = "${WORKDIR}/${BPN}"

require google-cloud-sdk.inc
