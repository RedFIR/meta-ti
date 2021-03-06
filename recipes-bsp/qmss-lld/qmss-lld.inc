LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://${WORKDIR}/git/ti/drv/qmss/COPYING.txt;md5=e8f6789acdcda76d02ed9203fc2e603d"

COMPATIBLE_MACHINE = "keystone"
PACKAGE_ARCH = "${MACHINE_ARCH}"

QMSS_LLD_GIT_URI = "git://git.ti.com/keystone-rtos/qmss-lld.git"
QMSS_LLD_GIT_PROTOCOL = "git"
QMSS_LLD_GIT_BRANCH = "master"
QMSS_LLD_GIT_DESTSUFFIX = "git/ti/drv/qmss"

# commit ID corresponding to DEV.QMSS_LLD.02.01.00.12
QMSS_LLD_SRCREV = "6b093515f38c6e4d3a8014903a563a9b89fd7c98"

BRANCH ="${QMSS_LLD_GIT_BRANCH}"
SRC_URI = "${QMSS_LLD_GIT_URI};destsuffix=${QMSS_LLD_GIT_DESTSUFFIX};protocol=${QMSS_LLD_GIT_PROTOCOL};branch=${BRANCH}"
SRCREV = "${QMSS_LLD_SRCREV}"

PV = "02.01.00.12"
INC_PR = "r0"

DEVICELIST = "k2h k2k k2l k2e"
DEVICELIST_k2hk-evm = "k2h k2k"
DEVICELIST_k2l-evm = "k2l"
DEVICELIST_k2e-evm = "k2e"

S = "${WORKDIR}/${QMSS_LLD_GIT_DESTSUFFIX}"

FILESEXTRAPATHS_prepend := "${THISDIR}/qmss-lld:"

SRC_URI_append = " \
    file://qmss-ld-fix-firmware-installation.patch \
"
