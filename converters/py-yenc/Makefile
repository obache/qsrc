# $NetBSD: Makefile,v 1.9 2020/01/26 17:30:52 rillig Exp $

DISTNAME=	yenc-${DISTVERSION}
DISTVERSION=	0.4.0

PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
REPLACE_PYTHON=	*.py
CATEGORIES=	devel
MASTER_SITES=	http://www.golug.it/pub/yenc/

MAINTAINER=	pkgsrc128@fastmail.us
HOMEPAGE=	https://www.golug.it/yenc.html
COMMENT=	Python module for yenc decoding module in C
LICENSE=	gnu-lgpl-v2.1

PYTHON_VERSIONS_ACCEPTED=	27 # as of 0.4.0

.include "../../lang/python/distutils.mk"
.include "../../mk/bsd.pkg.mk"
