DESCRIPTION = ".NET Core Runtime, SDK & CLI tools"
HOMEPAGE = "https://www.microsoft.com/net/core"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=9fc642ff452b28d62ab19b7eea50dfb9"

COMPATIBLE_HOST ?= "(x86_64|aarch64|arm).*-linux"

DEPENDS = "zlib"

RDEPENDS_${PN} = "\
    icu \
    libgssapi-krb5 \
    lttng-ust \
    zlib \
"

RDEPENDS_${PN}_remove_class-native = "libgssapi-krb5 lttng-ust"

PR = "r0"

SRC_ARCH_aarch64 = "arm64"
SRC_FETCH_ID_aarch64 = "50c2990a-2b62-4a51-b3db-8dab334f81c9/e0edfb3905b31ab030a97fa64f48cc8e"
SRC_SHA512SUM_aarch64 = "654e625627b35d9b8e4e5967c76485d0ff91769f5bb5429c99e0554c601426de1b26a5c37d32ab4bc227a15409c134757d5422944cf52c945b351c5927a28393"

SRC_ARCH_arm = "arm"
SRC_FETCH_ID_arm = "4bbb3a8d-e32a-4822-81d8-b2c570414f0a/aa7659eac0f0c52316a0fa7aa7c2081a"
SRC_SHA512SUM_arm = "9e507eac7d6598188766d6281ee8102c8f2b738611a4050cc7cbce7723591dce4b6e8d35588561741852f46a6f9af4fd4b715c328007a461cc5fb468d7ab0d8c"

SRC_ARCH_x86-64 = "x64"
SRC_FETCH_ID_x86-64 = "98563846-f949-4dc7-81a0-77016735bf08/56d5882a2046382fccb7db032f7d2a02"
SRC_SHA512SUM_x86-64 = "724a8e6ed77d2d3b957b8e5eda82ca8c99152d8691d1779b4a637d9ff781775f983468ee46b0bc8ad0ddbfd9d537dd8decb6784f43edae72c9529a90767310d2"

SRC_URI[vardeps] += "SRC_FETCH_ID SRC_ARCH"
SRC_URI[sha512sum] = "${SRC_SHA512SUM}"

SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/${SRC_FETCH_ID}/dotnet-sdk-${PV}-linux-${SRC_ARCH}.tar.gz;subdir=dotnet-${PV}"

do_configure[noexec] = "1"
do_compile[noexec] = "1"

RUNTIME = "5.0.6"
do_install[vardeps] += "RUNTIME"

do_install() {
    install -d ${D}${bindir}
    ln -rs ${D}${datadir}/dotnet/dotnet ${D}${bindir}/dotnet

    install -d ${D}${datadir}/dotnet
    cp -r --no-preserve=ownership  ${S}/templates ${D}${datadir}/dotnet
    install -m 0755 ${S}/dotnet ${D}${datadir}/dotnet
    install -m 0644 ${S}/LICENSE.txt ${D}${datadir}/dotnet
    install -m 0644 ${S}/ThirdPartyNotices.txt ${D}${datadir}/dotnet

    install -d ${D}${datadir}/dotnet/host/fxr
    cp -r --no-preserve=ownership ${S}/host/fxr/${RUNTIME} ${D}${datadir}/dotnet/host/fxr

    install -d ${D}${datadir}/dotnet/sdk
    cp -r --no-preserve=ownership ${S}/sdk/${PV} ${D}${datadir}/dotnet/sdk

    install -d ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App
    cp -r --no-preserve=ownership ${S}/shared/Microsoft.NETCore.App/${RUNTIME} ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App

    install -d ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App
    cp -r --no-preserve=ownership ${S}/shared/Microsoft.AspNetCore.App/${RUNTIME} ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App
}

FILES_${PN} += "\
    ${datadir}/dotnet/dotnet \
    ${datadir}/dotnet/*.txt \
    ${datadir}/dotnet/host \
    ${datadir}/dotnet/shared \
"

FILES_${PN}-dev = "\
    ${datadir}/dotnet/sdk \
    ${datadir}/dotnet/templates \
"

FILES_${PN}-dbg = "\
    ${datadir}/dotnet/.debug \
"

RRECOMMENDS_dotnet-dev[nodeprrecs] = "1"

INSANE_SKIP_${PN} = "already-stripped libdir staticdev textrel"

BBCLASSEXTEND = "native"
