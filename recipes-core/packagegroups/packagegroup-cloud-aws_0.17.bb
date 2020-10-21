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
    python3-awsiotsdk \
    python3-awscli \
"

PACKAGECONFIG[cpp] = "\
    , \
    , \
    , \
    aws-iot-device-sdk-cpp-v2 \
    aws-iot-device-sdk-cpp-v2-dev \
"
