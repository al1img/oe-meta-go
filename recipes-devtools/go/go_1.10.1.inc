require go.inc

DEPENDS = "go-bootstrap-native"

SSTATE_SCAN_CMD = "true"

SRC_URI = "${SRC_URI_PREFIX}/go${PV}.src.tar.gz;subdir=go-${PV}"
SRC_URI[md5sum] = "d55e8b2c6272ab1abf5e4e6cdaaca680"
SRC_URI[sha256sum] = "589449ff6c3ccbff1d391d4e7ab5bb5d5643a5a41a04c99315e55c16bbf73ddc"

SRC_URI += "\
        "

LIC_FILES_CHKSUM = "file://${WORKDIR}/go-${PV}/go/LICENSE;md5=5d4950ecb7b26d2c5e4e7b4e0dd74707"
