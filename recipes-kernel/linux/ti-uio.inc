SRC_URI_append_keystone = " file://keystone-uio.dtsi"
SRC_URI_append_k2hk-evm = " file://k2hk-uio.dtsi"
SRC_URI_append_k2l-evm = " file://k2l-uio.dtsi"
SRC_URI_append_k2e-evm = " file://k2e-uio.dtsi"

DTSI_LIST = ""
DTSI_LIST_append_keystone = " keystone-uio.dtsi"
DTSI_LIST_append_k2hk-evm = " k2hk-uio.dtsi"
DTSI_LIST_append_k2l-evm = " k2l-uio.dtsi"
DTSI_LIST_append_k2e-evm = " k2e-uio.dtsi"

do_setup_uio() {
    if [ "${ENABLE_TI_UIO_DEVICES}" == "1" ]
    then
        for dtsi in ${DTSI_LIST}
        do
            cp ${WORKDIR}/${dtsi} ${S}/arch/arm/boot/dts/
            for dtb in ${KERNEL_DEVICETREE}
            do
                dts=`echo $dtb | sed -e 's|dtb$|dts|'`
                echo "#include \"${dtsi}\"" >> ${S}/arch/arm/boot/dts/$dts
            done
        done
    fi
}

do_patch[postfuncs] += "do_setup_uio"
