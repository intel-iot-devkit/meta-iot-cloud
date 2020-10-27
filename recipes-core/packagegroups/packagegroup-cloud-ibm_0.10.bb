DESCRIPTION = "Packages for IBM Cloud & Watson platforms."
LICENSE = "MIT"

inherit packagegroup

PR = "r0"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "c python"

PACKAGECONFIG[c] = "\
    , \
    , \
    , \
    ibm-iotf-embeddedc \
    ibm-iotf-embeddedc-dev \
    ibm-iotf-embeddedc-samples \
"

PACKAGECONFIG[python] = "\
    , \
    , \
    , \
    python3-wiotp-sdk \
"
