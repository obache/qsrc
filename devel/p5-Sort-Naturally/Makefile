# $NetBSD: Makefile,v 1.11 2021/05/24 19:51:33 wiz Exp $

DISTNAME=		Sort-Naturally-1.03
PKGNAME=		p5-${DISTNAME}
PKGREVISION=		9
CATEGORIES=		devel perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=Sort/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		https://metacpan.org/release/Sort-Naturally
COMMENT=		Perl5 module for sorting numerical parts numerically, rest lexically

USE_LANGUAGES=		# empty
PERL5_PACKLIST=		auto/Sort/Naturally/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
