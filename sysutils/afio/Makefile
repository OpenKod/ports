# Created by: Juergen Lock <nox@jelal.hb.north.de>
# $FreeBSD$

PORTNAME=	afio
PORTVERSION=	2.5
CATEGORIES=	sysutils
MASTER_SITES=	SUNSITE/system/backup

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Archiver and backup program with builtin compression

LICENSE=	ART20 BSD2CLAUSE
LICENSE_COMB=	multi

USES=		tar:tgz

ALL_TARGET=	${PORTNAME}

SUB_FILES=	pkg-message

PLIST_FILES=	bin/afio man/man1/afio.1.gz
PORTDOCS=	HISTORY README SCRIPTS
PORTEXAMPLES=	*

OPTIONS_DEFINE=	DOCS EXAMPLES

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/script1/DONTDUMP ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${FILESDIR}/afiodump.example \
		${WRKSRC}/script2/* ${WRKSRC}/script3/* \
		${WRKSRC}/script4/* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
