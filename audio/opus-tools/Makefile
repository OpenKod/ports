# $FreeBSD$

PORTNAME=	opus-tools
PORTVERSION=	0.1.9
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	http://downloads.xiph.org/releases/opus/ \
		MOZILLA_EXTENDED/opus

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	Encode, inspect, and decode Opus files

LIB_DEPENDS=	libFLAC.so:${PORTSDIR}/audio/flac \
		libogg.so:${PORTSDIR}/audio/libogg \
		libopus.so:${PORTSDIR}/audio/opus

USES=		pkgconfig
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-maintainer-mode

.include <bsd.port.mk>
