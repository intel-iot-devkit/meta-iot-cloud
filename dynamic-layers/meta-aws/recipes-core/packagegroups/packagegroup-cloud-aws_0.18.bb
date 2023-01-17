DESCRIPTION = "Packages for Amazon Web Services."
LICENSE = "MIT"

inherit packagegroup

PR = "r0"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "python cpp"

PACKAGECONFIG[python] = "\
    , \
    , \
    , \
    aws-iot-device-sdk-python-v2 \
    aws-cli \
"

PACKAGECONFIG[cpp] = "\
    , \
    , \
    , \
    aws-iot-device-sdk-cpp-v2 \
    aws-iot-device-sdk-cpp-v2-dev \
"
