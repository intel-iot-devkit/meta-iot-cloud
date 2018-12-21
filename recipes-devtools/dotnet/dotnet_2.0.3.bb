DESCRIPTION = ".NET Core Runtime, SDK & CLI tools"
HOMEPAGE = "https://www.microsoft.com/net/core"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=42b611e7375c06a28601953626ab16cb"

COMPATIBLE_HOST ?= "x86_64.*-linux"

DEPENDS += "\
    curl \
    zlib \
    util-linux \
    icu \
    openssl \
    libunwind \
"

RDEPENDS_${PN}_class-target += "\
    lttng-ust \
    krb5 \
    libicuuc \
    libicui18n \
"

PR = "r0"

SRC_URI =  "https://download.microsoft.com/download/D/7/2/D725E47F-A4F1-4285-8935-A91AE2FCC06A/dotnet-sdk-2.0.3-linux-x64.tar.gz;downloadfilename=dotnet-${PV}.tar.gz"
SRC_URI[md5sum] = "add756a84292da3a04cbadfc514d2c69"
SRC_URI[sha256sum] = "6c4223094b1e3e93a466c6d91d3aa1053a3b2aef99b63bf45023bda3fca1aede"

S = "${WORKDIR}"

HOST_FXR = "2.0.3"
SHARED_FRAMEWORK = "2.0.3"
SDK = "2.0.3"

PACKAGES = "\
    ${PN} \
    ${PN}-dev \
"

do_configure[noexec] = "1"
do_compile[noexec] = "1"

python do_install () {
    bb.build.exec_func("shell_do_install", d)
    oe.path.make_relative_symlink(d.expand("${D}${bindir}/dotnet"))
}

shell_do_install() {
    install -d ${D}${bindir}
    install -d ${D}${datadir}/dotnet
    install -d ${D}${datadir}/dotnet/host/fxr
    install -d ${D}${datadir}/dotnet/sdk
    install -d ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App

    install -m 0755 ${S}/dotnet ${D}${datadir}/dotnet
    install -m 0644 ${S}/LICENSE.txt ${D}${datadir}/dotnet
    install -m 0644 ${S}/ThirdPartyNotices.txt ${D}${datadir}/dotnet

    cp -r ${S}/sdk/${SDK} ${D}${datadir}/dotnet/sdk
    cp -r ${S}/host/fxr/${HOST_FXR} ${D}${datadir}/dotnet/host/fxr
    cp -r ${S}/shared/Microsoft.NETCore.App/${SHARED_FRAMEWORK} ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App

    # Symlinks
    ln -s ${D}${datadir}/dotnet/dotnet ${D}${bindir}/dotnet
}

FILES_${PN} = "\
    ${bindir} \
    ${datadir}/dotnet/dotnet \
    ${datadir}/dotnet/*.txt \
    ${datadir}/dotnet/host \
    ${datadir}/dotnet/shared \
"

FILES_${PN}-dev = "\
    ${datadir}/dotnet/sdk \
"

RRECOMMENDS_dotnet-dev[nodeprrecs] = "1"

INSANE_SKIP_${PN} += "already-stripped staticdev ldflags libdir"
INSANE_SKIP_${PN}-dev = "libdir"

INHIBIT_PACKAGE_DEBUG_SPLIT = "1"
INHIBIT_SYSROOT_STRIP = "1"

BBCLASSEXTEND = "native"
