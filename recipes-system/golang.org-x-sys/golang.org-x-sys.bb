DESCRIPTION = "Go sys"
SECTION = "sys"
HOMEPAGE = "https://godoc.org/golang.org/x/sys"

GO_IMPORT = "golang.org/x/sys"

inherit go

SRC_URI = "\
    git://github.com/golang/sys.git;protocol=https;name=sys;destsuffix=${PN}-${PV}/src/${GO_IMPORT} \
    "

SRCREV = "${AUTOREV}"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://src/${GO_IMPORT}/LICENSE;md5=5d4950ecb7b26d2c5e4e7b4e0dd74707"
