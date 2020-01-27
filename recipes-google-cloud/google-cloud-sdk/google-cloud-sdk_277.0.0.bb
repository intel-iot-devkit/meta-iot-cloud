DESCRIPTION = "Command-line interface for Google Cloud Platform products and services"
HOMEPAGE = "https://cloud.google.com/sdk/"
AUTHOR = "Google Cloud Platform"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d02c4ee3b2a6ba87eea7b6756fd43895"

SRC_URI = "https://dl.google.com/dl/cloudsdk/channels/rapid/downloads/${BPN}-${PV}-linux-x86_64.tar.gz"
SRC_URI[md5sum] = "653aa306f499b9bf44beb52655403935"
SRC_URI[sha256sum] = "b158894c427712d006fac235daf8d288db110ecfbcf649ed11cdf36ac2b2ff2a"

PR = "r0"

S = "${WORKDIR}/${BPN}"

require google-cloud-sdk.inc
