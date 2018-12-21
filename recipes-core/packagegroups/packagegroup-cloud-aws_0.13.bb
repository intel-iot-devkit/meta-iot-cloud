DESCRIPTION = "Packages for Amazon Web Services."
LICENSE = "MIT"

inherit packagegroup

PR = "r3"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "python"

PACKAGECONFIG[python] = "\
    , \
    , \
    , \
    python-aws-iot-device-sdk \
    python-aws-iot-device-sdk-samples \
    python-awscli \
"
