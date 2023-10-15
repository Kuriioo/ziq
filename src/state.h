/*
 * state.h
 */

#ifndef state_h
#define state_h


#include "ziq.h"


typedef struct {
	int i;
} ziq_State;


ziq_State *ziq_newstate (void);


#endif
