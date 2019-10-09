DESCRIPTION = ".NET Core Runtime, SDK & CLI tools"
HOMEPAGE = "https://www.microsoft.com/net/core"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=9fc642ff452b28d62ab19b7eea50dfb9"

COMPATIBLE_HOST ?= "(x86_64|aarch64).*-linux"

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
    libcurl \
    krb5 \
    libgssapi-krb5 \
    libicuuc \
    libicui18n \
"

HOST_FXR = "3.0.0"
SHARED_FRAMEWORK = "3.0.0"
SDK = "3.0.100"

PR = "r1"

python __anonymous () {
    import re
    
    target_arch = d.getVar('TARGET_ARCH')
    
    if re.match('x86_64$', target_arch):
        d.setVar('SRC_FETCH_ID', '886b4a4c-30af-454b-8bec-81c72b7b4e1f/d1a0c8de9abb36d8535363ede4a15de6')
        d.setVarFlag('SRC_URI', 'md5sum', '15a8ea8c61b8e3f90968bbfe515ca784')
        d.setVarFlag('SRC_URI', 'sha256sum', '12098fe29d5c857fd6093b1fd63eda9f91b92798e3748fcedc0e0727f1ac01c2')
        d.setVar('DOTNET_ARCH', 'x64')
    elif re.match('arm64$', target_arch):
        d.setVar('SRC_FETCH_ID', 'cbc83a0e-895c-4959-99d9-21cd11596e64/b0e59c2ba2bd3ef0f592acbeae7ab27d')
        d.setVarFlag('SRC_URI', 'md5sum', '3fe1e83251456e7afc6aeb43f44e8740')
        d.setVarFlag('SRC_URI', 'sha256sum', 'ffcd9db434dab9f068bbf229a4e20f935cab0b48b28e4a83c114c6c1f0f5f6f6')
        d.setVar('DOTNET_ARCH', 'arm64')
}

SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/${SRC_FETCH_ID}/${BPN}-sdk-${SDK}-linux-${DOTNET_ARCH}.tar.gz"

S = "${WORKDIR}"

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
    cp -r ${S}/templates ${D}${datadir}/dotnet

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
    ${datadir}/dotnet/templates \
"

RRECOMMENDS_dotnet-dev[nodeprrecs] = "1"

INSANE_SKIP_${PN} = "already-stripped staticdev ldflags libdir"
INSANE_SKIP_${PN}-dev = "libdir"
INHIBIT_PACKAGE_DEBUG_SPLIT = "1"

BBCLASSEXTEND = "native"
