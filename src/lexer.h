/*
 * lexer.h
 */

#ifndef lexer_h
#define lexer_h


#include "ziq.h"
#include "state.h"


enum RESERVED {
  TOKEN_FOR, TOKEN_WHILE, TOKEN_BREAK, TOKEN_RETURN,
  TOKEN_IF, TOKEN_ELSE, TOKEN_ELSEIF,
  TOKEN_TRUE, TOKEN_FALSE, TOKEN_NULL,
  TOKEN_SEMI, TOKEN_DOT, TOKEN_DOUBLECOLON,
  TOKEN_AND, TOKEN_OR, TOKEN_NOT, TOKEN_EQUAL,
  TOKEN_VOID, TOKEN_INT, TOKEN_STRING, TOKEN_DOUBLE,
};


typedef struct {
  int token;
  char *value;
} Token;


typedef struct {
  int current;		// current char
  int line_number;
  int last_line;
  Token token;
  Token next;
} LexerState;


void ziq_lexer_init (ziq_State *Z);


#endif
