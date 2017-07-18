DESCRIPTION = ".NET Core Runtime, SDK & CLI tools"
HOMEPAGE = "https://www.microsoft.com/net/core"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=4283671594edec4c13aeb073c219237a"

RDEPENDS_${PN}_class-target = "\
	curl \
	zlib \
	util-linux \
	openssl \
	icu \
	libunwind \
	lttng-ust \
	krb5 \
"

PR = "r0"

SRC_URI =  "https://go.microsoft.com/fwlink/?linkid=847089;downloadfilename=dotnet-${PV}.tar.gz"
SRC_URI[md5sum] = "daa45dd4b751b0ef3bd848933e912f15"
SRC_URI[sha256sum] = "f8f86814eeac64b1b20faabd9c0d80476279c309d68b4c73a5bff20f4d899e44"

S = "${WORKDIR}"

HOST_FXR = "1.1.0"
SHARED_FRAMEWORK = "${PV}"
SDK = "1.0.3"

PACKAGES = "\
	${PN} \
	${PN}-dev \
"

do_configure[noexec] = "1"
do_compile[noexec] = "1"

do_install() {
	install -d ${D}${bindir}
	install -d ${D}${datadir}/dotnet
	install -d ${D}${datadir}/dotnet/host/fxr
	install -d ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App

	install -m 0755 ${S}/dotnet ${D}${datadir}/dotnet
	install -m 0644 ${S}/LICENSE.txt ${D}${datadir}/dotnet
	install -m 0644 ${S}/ThirdPartyNotices.txt ${D}${datadir}/dotnet

	cp -r ${S}/sdk ${D}${datadir}/dotnet
	cp -r ${S}/host/fxr/${HOST_FXR} ${D}${datadir}/dotnet/host/fxr
	cp -r ${S}/shared/Microsoft.NETCore.App/${SHARED_FRAMEWORK} ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App

	# Symlinks
	ln -s ${datadir}/dotnet/dotnet ${D}${bindir}/dotnet
}

FILES_${PN} += "\
	${bindir} \
	${datadir}/dotnet/dotnet \
	${datadir}/dotnet/*.txt \
	${datadir}/dotnet/host \
	${datadir}/dotnet/shared \
"

FILES_${PN}-dev += "\
	${datadir}/dotnet/sdk \
"

INSANE_SKIP_${PN} = "already-stripped textrel staticdev ldflags"
INSANE_SKIP_${PN}-dev = "ldflags"

INHIBIT_PACKAGE_DEBUG_SPLIT = "1"

BBCLASSEXTEND = "native"
