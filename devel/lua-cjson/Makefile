# Created by: osa
# $FreeBSD$

PORTNAME=	cjson
PORTVERSION=	2.1.0
CATEGORIES=	devel
MASTER_SITES=	http://www.kyne.com.au/~mark/software/download/
PKGNAMEPREFIX=	${LUA_PKGNAMEPREFIX}
DISTNAME=	lua-cjson-${PORTVERSION}

MAINTAINER=	osa@FreeBSD.org
COMMENT=	Fast JSON parsing and encoding support for Lua

USES=		lua:51

MAKE_ARGS=	LUA_VERSION=${LUA_VER}

PLIST_FILES=	%%LUA_MODLIBDIR%%/cjson.so

post-patch:
	@${REINPLACE_CMD} '16,18d; \
		21s|^\(LUA_INCLUDE.*\)\(PREFIX\)\(.*\)|\1LOCALBASE\3/lua${LUA_VER_STR}|' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
