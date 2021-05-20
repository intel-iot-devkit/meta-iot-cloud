DESCRIPTION = "C99 library implementation for communicating with the S3 service, designed for maximizing throughput on high bandwidth EC2 instances."
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/awslabs/aws-c-s3"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=34400b68072d710fecd0a2940a0d1658"

inherit cmake

DEPENDS += "\
    aws-c-auth \
"

SRC_URI = "git://github.com/awslabs/${BPN}.git;branch=main;tag=v${PV} \
           file://Build-static-and-shared-libs.patch \
"

PR = "r0"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "\
    -DBUILD_TESTING=OFF \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"
