# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD$

PORTNAME=	Test-Warnings
PORTVERSION=	0.021
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Test for warnings and the lack of them

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-CPAN-Meta-Check>=0.007:${PORTSDIR}/devel/p5-CPAN-Meta-Check \
		p5-Capture-Tiny>=0:${PORTSDIR}/devel/p5-Capture-Tiny \
		p5-Test-Kwalitee>=1.12:${PORTSDIR}/devel/p5-Test-Kwalitee \
		p5-Test-Tester>=0.108:${PORTSDIR}/devel/p5-Test-Tester

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
