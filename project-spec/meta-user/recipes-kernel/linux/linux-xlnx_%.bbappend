FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

SRC_URI+="file://test.patch"
SRC_URI:append = " file://bsp.cfg"
KERNEL_FEATURES:append = " bsp.cfg"
