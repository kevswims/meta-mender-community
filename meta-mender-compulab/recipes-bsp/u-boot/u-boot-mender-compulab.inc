FILESEXTRAPATHS_prepend := "${THISDIR}/files:"
MENDER_UBOOT_PRE_SETUP_COMMANDS_cl-som-imx7 = "setenv kernel_addr_r \${loadaddr}; setenv bootargs console=\${console},\${baudrate}"
MENDER_UBOOT_PRE_SETUP_COMMANDS_cl-som-imx8 = "setenv kernel_addr_r \${loadaddr}"
MENDER_UBOOT_PRE_SETUP_COMMANDS_luci-som-imx8 = "setenv kernel_addr_r \${loadaddr}"
