DESCRIPTION = ".NET is a free, cross-platform, open-source developer platform for building many different types of applications."
HOMEPAGE = "https://dotnet.microsoft.com"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=9fc642ff452b28d62ab19b7eea50dfb9"

COMPATIBLE_HOST ?= "(x86_64|aarch64|arm).*-linux"

DEPENDS = "patchelf-native"

RDEPENDS:${PN} = "\
    icu \
    libgssapi-krb5 \
    zlib \
"

RDEPENDS:${PN}:remove:class-native = "libgssapi-krb5"

SRC_ARCH:aarch64 = "arm64"
SRC_FETCH_ID:aarch64 = "33c6e1e3-e81f-44e8-9de8-91934fba3c94/9105f95a9e37cda6bd0c33651be2b90a"
SRC_SHA512SUM:aarch64 = "2ea443c27ab7ca9d566e4df0e842063642394fd22fe2a8620371171c8207ae6a4a72c8c54fc6af5b6b053be25cf9c09a74504f08b963e5bd84544619aed9afc2"

SRC_ARCH:arm = "arm"
SRC_FETCH_ID:arm = "eefec3fa-c4c3-454d-bd7d-8fda31d15e5f/62668641ffc94db5fa11187f14a981f8"
SRC_SHA512SUM:arm = "5a683430325a90dd1d8e0071a1868939fb01268f9eb389ca1dc40956fde6b9f45bec086553ad3333139e530dfe5afae48195bcdfec388b0b568989924a1f1dd7"

SRC_ARCH:x86-64 = "x64"
SRC_FETCH_ID:x86-64 = "c505a449-9ecf-4352-8629-56216f521616/bd6807340faae05b61de340c8bf161e8"
SRC_SHA512SUM:x86-64 = "a4d96b6ca2abb7d71cc2c64282f9bd07cedc52c03d8d6668346ae0cd33a9a670d7185ab0037c8f0ecd6c212141038ed9ea9b19a188d1df2aae10b2683ce818ce"

SRC_URI[vardeps] += "SRC_FETCH_ID SRC_ARCH"
SRC_URI[sha512sum] = "${SRC_SHA512SUM}"

SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/${SRC_FETCH_ID}/dotnet-sdk-${PV}-linux-${SRC_ARCH}.tar.gz;subdir=dotnet-${PV}"

DOTNET_RUNTIME = "6.0.3"
DOTNET_ASP = "6.0.3"
DOTNET_TEMPLATES = "6.0.3"
DOTNET_MANIFESTS = "6.0.200"

do_configure[noexec] = "1"
do_compile[noexec] = "1"

do_install() {
    install -d ${D}${bindir}
    ln -rs ${D}${datadir}/dotnet/dotnet ${D}${bindir}/dotnet

    install -d ${D}${datadir}/dotnet
    install -m 0755 ${S}/dotnet ${D}${datadir}/dotnet
    install -m 0644 ${S}/LICENSE.txt ${D}${datadir}/dotnet
    install -m 0644 ${S}/ThirdPartyNotices.txt ${D}${datadir}/dotnet

    install -d ${D}${datadir}/dotnet/host/fxr
    cp -r --no-preserve=ownership ${S}/host/fxr/${DOTNET_RUNTIME} ${D}${datadir}/dotnet/host/fxr

    install -d ${D}${datadir}/dotnet/sdk
    cp -r --no-preserve=ownership ${S}/sdk/${PV} ${D}${datadir}/dotnet/sdk

    install -d ${D}${datadir}/dotnet/sdk-manifests
    cp -r --no-preserve=ownership ${S}/sdk-manifests/${DOTNET_MANIFESTS} ${D}${datadir}/dotnet/sdk-manifests

    install -d ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App
    cp -r --no-preserve=ownership ${S}/shared/Microsoft.NETCore.App/${DOTNET_RUNTIME} ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App

    install -d ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App
    cp -r --no-preserve=ownership ${S}/shared/Microsoft.AspNetCore.App/${DOTNET_ASP} ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App

    install -d ${D}${datadir}/dotnet/templates
    cp -r --no-preserve=ownership  ${S}/templates/${DOTNET_TEMPLATES} ${D}${datadir}/dotnet/templates

    # Hack to fix liblttng-ust dependency issues
    patchelf --remove-needed liblttng-ust.so.0 ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App/${DOTNET_RUNTIME}/libcoreclrtraceptprovider.so
}

do_install:append:x86-64() {
    # Set correct interpreter path
    patchelf --set-interpreter ${base_libdir}/ld-linux-x86-64.so.2 ${D}${datadir}/dotnet/dotnet
}

FILES:${PN} += "\
    ${datadir}/dotnet/dotnet \
    ${datadir}/dotnet/*.txt \
    ${datadir}/dotnet/host \
    ${datadir}/dotnet/shared \
"

FILES:${PN}-dev = "\
    ${datadir}/dotnet/sdk \
    ${datadir}/dotnet/sdk-manifests \
    ${datadir}/dotnet/templates \
"

FILES:${PN}-dbg = "\
    ${datadir}/dotnet/.debug \
"

RRECOMMENDS:dotnet-dev[nodeprrecs] = "1"

INSANE_SKIP:${PN} = "already-stripped libdir staticdev"

BBCLASSEXTEND = "native"
