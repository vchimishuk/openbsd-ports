COMMENT ?=		${SLANG}-${DLANG} ${DICT_FULL_NAME} dictionary for StarDict
PKGNAME ?=		stardict-${SLANG}-${DLANG}-${DICT_NAME}-${V}
CATEGORIES ?=		textproc
HOMEPAGE ?=		http://stardict.sourceforge.net
PERMIT_PACKAGE ?=	Yes
RUN_DEPENDS +=		textproc/sdcv
DIC_DIR =		${PREFIX}/share/stardict/dic
EXTRACT_NAME ?=		${DISTNAME}

do-build:
	@true

do-install:
	${INSTALL_DATA_DIR} ${DIC_DIR}
	${INSTALL_DATA} ${WRKSRC}/../${EXTRACT_NAME}/* ${DIC_DIR}
