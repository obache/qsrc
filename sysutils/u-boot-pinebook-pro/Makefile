# $NetBSD: Makefile,v 1.11 2021/06/25 08:28:57 mrg Exp $

PKGREVISION=		5

UBOOT_TARGET=		pinebook-pro
UBOOT_CONFIG=		pinebook_pro-rk3399_defconfig
UBOOT_BIN=		idbloader.img rksd_loader.img rkspi_loader.img u-boot.itb

UBOOT_INSTALLBOOT_PLIST=	installboot.plist

UBOOT_IMAGE_TYPE=	rk3399

.include "../../sysutils/u-boot/u-boot-rockchip.mk"
