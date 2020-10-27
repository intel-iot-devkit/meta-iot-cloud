DESCRIPTION = "Packages for IBM Cloud & Watson platforms."
LICENSE = "MIT"

inherit packagegroup

PR = "r0"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "python"

PACKAGECONFIG[python] = "\
    , \
    , \
    , \
    python3-wiotp-sdk \
"
