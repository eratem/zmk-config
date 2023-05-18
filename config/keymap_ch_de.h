#define CH_Z Y
#define CH_Y Z

#define CH_QUOT MINUS // ' ? ´
#define CH_AE SINGLE_QUOTE // ä à {
#define CH_UE LEFT_BRACKET // ü è [
#define CH_OE SEMICOLON // ö é

#define CH_PARA GRAVE // § and °
#define CH_CARR EQUAL // ^ ` ~
#define CH_UML RIGHT_BRACKET // ¨ ! ]
#define CH_DLR BACKSLASH // $ £ }
#define CH_LESS NUBS // < > and backslash
#define CH_MINS SLASH // - _

// shifted characters
#define CH_RING LS(CH_PARA) // °
#define CH_PLUS LS(N1) // +
#define CH_DQOT LS(N2) // "
#define CH_AST LS(N3) // *
#define CH_CELA LS(N4) // ç
#define CH_PERC LS(N5) // %
#define CH_AMPR LS(N6) // &
#define CH_SLSH LS(N7) // /
#define CH_LPRN LS(N8) // (
#define CH_RPRN LS(N9) // )
#define CH_EQL  LS(N0) // =
#define CH_QST  LS(CH_QUOT) // ?
#define CH_GRV  LS(CH_CARR) // `
#define CH_EXLM LS(CH_UML) // !
#define CH_POND LS(CH_DLR) // £
#define CH_MORE LS(CH_LESS) // >
#define CH_COLN LS(DOT) // :
#define CH_SCLN LS(COMMA) // ;
#define CH_UNDS LS(CH_MINS) // _

// Alt Gr-ed characters
#define CH_BRBR RA(N1) // ¦ brocken bar
#define CH_AT   RA(N2) // @
#define CH_HASH RA(N3) // #
#define CH_NOTL RA(N6) // ¬ negative logic
#define CH_PIPE RA(N7) // |
#define CH_CENT RA(N8) // ¢ cent
#define CH_ACUT RA(CH_QUOT) // ´
#define CH_TILD RA(CH_CARR) // ~
#define CH_EURO RA(E) // €
#define CH_LBRC RA(CH_UE) // [
#define CH_RBRC RA(CH_UML) // ]
#define CH_LCBR RA(CH_AE) // {
#define CH_RCBR RA(CH_DLR) // }
#define CH_BSLS RA(CH_LESS) // backslash
