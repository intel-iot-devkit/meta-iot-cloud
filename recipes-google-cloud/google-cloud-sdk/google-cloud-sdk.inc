# Only supports Python 2.x
RDEPENDS_${PN} = "\
    bash \
    python \
    python-grpcio \
"

# Default packages
PACKAGES = "\
    ${PN} \
"

do_compile[noexec] = "1"

do_configure() {
    # Disable updater
    sed -i 's|"disable_updater": false|"disable_updater": true|g' ${S}/lib/googlecloudsdk/core/config.json
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
