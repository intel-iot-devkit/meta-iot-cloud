DESCRIPTION = "Command-line interface for Google Cloud Platform products and services"
HOMEPAGE = "https://cloud.google.com/sdk/"
AUTHOR = "Google Cloud Platform"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d02c4ee3b2a6ba87eea7b6756fd43895"

# Only supports Python 2.x
RDEPENDS_${PN} = "\
    bash \
    python \
    python-grpcio \
"

SRC_URI = "https://dl.google.com/dl/cloudsdk/channels/rapid/downloads/${PN}-${PV}-linux-x86_64.tar.gz"
SRC_URI[md5sum] = "016ba1e10f8d916ab0e41402d39fe55d"
SRC_URI[sha256sum] = "3cae8a7b021f3c9eaab6c0b59a1301eb7cda3a422e645b3b0c6ccfe89b1e0332"

PR = "r0"

S = "${WORKDIR}/${PN}"

# Default packages
PACKAGES = "\
    ${PN} \
"

do_compile[noexec] = "1"

do_configure() {
    # Disable updater
    sed -i 's|"disable_updater": false|"disable_updater": true|g' ${S}/lib/googlecloudsdk/core/config.json

    # Fix dependencies
    sed -i 's|/usr/bin/python3|/usr/bin/python|g' ${S}/lib/third_party/portpicker/__init__.py
    sed -i 's|/usr/bin/python2.4|/usr/bin/python|g' ${S}/lib/third_party/pygments/lexers/dalvik.py
    sed -i 's|/usr/bin env python|/usr/bin/env|g' ${S}/platform/gsutil/third_party/boto/tests/unit/cloudsearch/*
    sed -i 's|/usr/bin env python|/usr/bin/env|g' ${S}/platform/gsutil/third_party/boto/tests/unit/cloudsearch2/*
    sed -i 's|/usr/bin env python|/usr/bin/env|g' ${S}/platform/gsutil/third_party/boto/tests/unit/cloudsearchdomain/*
}

# Remove non-arch independent dependencies
do_install_prepend() {
    rm -rf ${S}/lib/third_party/grpc
}

do_install() {  
    install -d ${D}${bindir}
    install -d ${D}${libdir}/${PN}
    install -d ${D}${sysconfdir}/bash_completion.d

    install -m 0644 ${S}/completion.bash.inc ${D}${libdir}/${PN}
    install -m 0644 ${S}/properties ${D}${libdir}/${PN}
    install -m 0644 ${S}/README ${D}${libdir}/${PN}
    install -m 0644 ${S}/RELEASE_NOTES ${D}${libdir}/${PN}
    install -m 0644 ${S}/VERSION ${D}${libdir}/${PN}

    cp -r ${S}/.install ${D}${libdir}/${PN}
    cp -r ${S}/bin ${D}${libdir}/${PN}
    cp -r ${S}/data ${D}${libdir}/${PN}
    cp -r ${S}/lib ${D}${libdir}/${PN}
    cp -r ${S}/platform ${D}${libdir}/${PN}

    # Symlinks
    ln -s ${libdir}/${PN}/completion.bash.inc ${D}${sysconfdir}/bash_completion.d/gcloud
    ln -s ${libdir}/${PN}/bin/bq ${D}${bindir}/bq
    ln -s ${libdir}/${PN}/bin/docker-credential-gcloud ${D}${bindir}/docker-credential-gcloud
    ln -s ${libdir}/${PN}/bin/gcloud ${D}${bindir}/gcloud
    ln -s ${libdir}/${PN}/bin/git-credential-gcloud.sh ${D}${bindir}/git-credential-gcloud.sh
    ln -s ${libdir}/${PN}/bin/gsutil ${D}${bindir}/gsutil
}

FILES_${PN} = "\
    ${bindir} \
    ${libdir}/${PN} \
    ${sysconfdir}/bash_completion.d \
"
