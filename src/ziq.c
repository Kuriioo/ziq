/*
 * ziq.c
 */

#define ziq_c


#include <stdio.h>
#include <stdlib.h>


#include "ziq.h"
#include "lexer.h"
#include "state.h"


static void print_version (void) {
	printf("Ziq %i.%i\n", ZIQ_VERSION_MAJOR, ZIQ_VERSION_MINOR);
}


static void doREPL (ziq_State *Z) {
	int status;
}


int main (int argc, char **argv) {
	ziq_State *Z = ziq_newstate();
	if (Z == NULL) {
		print_version();
		printf("Not enough memory\n");
		return EXIT_FAILURE;
	}
	ziq_lexer_init(Z);
	return EXIT_SUCCESS;
}
