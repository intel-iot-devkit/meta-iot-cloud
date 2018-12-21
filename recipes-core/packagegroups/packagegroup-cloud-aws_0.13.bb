DESCRIPTION = "Packages for Amazon Web Services."
LICENSE = "MIT"

inherit packagegroup

PR = "r3"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "python cpp"

PACKAGECONFIG[python] = "\
    , \
    , \
    , \
    python-aws-iot-device-sdk \
    python-aws-iot-device-sdk-samples \
    python-awscli \
"

PACKAGECONFIG[cpp] = "\
    , \
    , \
    , \
    aws-iot-device-sdk-cpp \
    aws-iot-device-sdk-cpp-dev \
    aws-iot-device-sdk-cpp-samples \
"
