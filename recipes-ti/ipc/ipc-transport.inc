LIC_FILES_CHKSUM = "file://COPYING.txt;md5=27bb0deb260c60120a8d7b91da7c3b02"

IPC_TRANSPORT_GIT_URI = "git://git.ti.com/keystone-linux/ipc-transport.git"
IPC_TRANSPORT_GIT_BRANCH = "master"
IPC_TRANSPORT_GIT_PROTOCOL = "git"

# Below commit ID corresponds to DEV.IPC-TRANSPORT.02.00.00.01
IPC_TRANSPORT_SRCREV = "88ea336c584ccec4b2c281cd7f75df9dff6d4edf"

BRANCH="${IPC_TRANSPORT_GIT_BRANCH}"
SRC_URI = "${IPC_TRANSPORT_GIT_URI};protocol=${IPC_TRANSPORT_GIT_PROTOCOL};branch=${BRANCH}"
SRCREV = "${IPC_TRANSPORT_SRCREV}"
PV = "02.00.00.01"

INC_PR = "r1"
