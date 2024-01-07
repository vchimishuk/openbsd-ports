COMMENT =		StarDict console version
V =			0.5.5
PKGNAME =		sdcv-${V}
CATEGORIES =		textproc
HOMEPAGE =		https://github.com/Dushistov/sdcv
GH_ACCOUNT =		Dushistov
GH_PROJECT =		sdcv
GH_TAGNAME =		v${V}
# GPLv2
PERMIT_PACKAGE =	Yes
COMPILER =		base-clang ports-gcc base-gcc
MODULES =		devel/cmake
LIB_DEPENDS =		devel/readline devel/glib2
CONFIGURE_STYLE =	cmake
CONFIGURE_ARGS =	-DCMAKE_INSTALL_MANDIR=${PREFIX}/man

post-patch:
	sed -i "s|/usr/share|${PREFIX}/share|" ${WRKSRC}/src/sdcv.cpp
	sed -i "s|/usr/share|${PREFIX}/share|" ${WRKSRC}/doc/sdcv.1
	sed -i "s|/usr/share|${PREFIX}/share|" ${WRKSRC}/doc/uk/sdcv.1

.include <bsd.port.mk>
