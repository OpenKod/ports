# Created by: walt
# $FreeBSD$

PORTNAME=	monitord
PORTVERSION=	0.4.1
PORTREVISION=	3
CATEGORIES=	sysutils
MASTER_SITES=	ftp://ftp.erudition.net/pub/monitord/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Service that restarts other standalone services

BROKEN=		No public distfiles

USE_RC_SUBR=	monitord

post-patch:
	@${REINPLACE_CMD} -e 's|syslodg|syslogd|' ${WRKSRC}/${PORTNAME}.8
	@${REINPLACE_CMD} -e 's|-pipe||' ${WRKSRC}/Makefile

post-install:
	@${INSTALL_DATA} ${WRKSRC}/monitord.conf.sample \
		${STAGEDIR}${PREFIX}/etc/monitord.conf.sample

.include <bsd.port.mk>
