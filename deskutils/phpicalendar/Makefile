# Created by: Edwin Groothuis <edwin@mavetju.org>
# $FreeBSD$

PORTNAME=	phpicalendar
PORTVERSION=	2.4
PORTEPOCH=	1
CATEGORIES=	deskutils www
#MASTER_SITES=	SF/${PORTNAME}/files/${PORTNAME}/${PORTNAME}%202.4%20RC7
# phpicalendar-2.4_20100615.tar.bz2
# http://sourceforge.net/projects/phpicalendar/files/phpicalendar/phpicalendar%202.4%20RC7/phpicalendar-2.4_20100615.tar.bz2/download
# /projects/ not /project/
MASTER_SITES=	http://sourceforge.net/projects/${PORTNAME}/files/${PORTNAME}/${PORTNAME}%202.4%20RC7/
PKGNAMESUFFIX=	-RC7
DISTNAME=	${PORTNAME}-${PORTVERSION}_20100615

MAINTAINER=	edwin@mavetju.org
COMMENT=	Webbased calendar with iCal support

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		tar:bz2
NO_BUILD=	yes
USE_PHP=	session pcre
PLIST_SUB=	WWWOWN="${WWWOWN}" WWWGRP="${WWWGRP}"
SUB_FILES=	pkg-message
WRKSRC=	${WRKDIR}/${PORTNAME}-${PORTVERSION}/

PORTDOCS=	AUTHORS COPYING README TIMEZONES

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	@${FIND} ${WRKSRC} -name \*.orig -exec ${RM} {} \;
	@${MV} ${WRKSRC}/config.inc.php ${WRKSRC}/config.inc.php.sample
.for dir in admin calendars functions images includes languages lib nicetitle rss templates
	@${CP} -Rv ${WRKSRC}/${dir} ${STAGEDIR}${WWWDIR}
.endfor
.for f in caldav.php config.inc.php.sample day.php default_config.php error.php index.php month.php preferences.php print.php search.php week.php year.php
	@${CP} -v ${WRKSRC}/${f} ${STAGEDIR}${WWWDIR}
.endfor
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}
.endif

.include <bsd.port.mk>
