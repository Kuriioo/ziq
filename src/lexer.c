/*
 * lexer.c
 */

#define lexer_c


#include "state.h"
#include "lexer.h"


#include <stdio.h>
#include <stdlib.h>


static const char *const ziq_tokens [] = {
	"for", "while", "break", "return",
	"if", "else", "else if",
	"true", "false", "null",
	";", ".", ":",
	"&&", "||", "!", "=="
	"void", "int", "String", "double",
};


static int read_numeral (LexerState *ls) {

}


static int ziq_lexer (LexerState *ls) {
	for (;;) {
		switch (ls->current) {
			case '\n': {
				// TODO: new line
				break;
			}
			case ' ': {
				
				break;
			}
			case '/': {
				if (ls->current != '/') return '/';
				if (ls->current == '*') { // long comment ?
				
				}	
			}
			case ';': {
				return TOKEN_SEMI;
			}
			case '=': {
				return TOKEN_EQUAL;
			}
			case '"': {
				return TOKEN_STRING;
			}
			case ':': {
				return TOKEN_DOUBLECOLON;
			}
			case '.': {
				return TOKEN_DOT;
			}
			case '0': case '1': case '2': case '3': case '4':
			case '5': case '6': case '7': case '8': case '9': {
				//TODO: Detect what type of numeral
				// return read_numeral(ls);
				return TOKEN_INT;
			}
			default: {
				return 0;
			}
		}
	}
}


void ziq_lexer_init (ziq_State *Z) {
	LexerState *ls = malloc(sizeof(LexerState));
	ls->current = '1';
	printf(": %i\n", ziq_lexer(ls));
	ls->current = ';';
	printf(": %i\n", ziq_lexer(ls));

}

