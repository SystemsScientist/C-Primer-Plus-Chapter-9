// interchange.c

#include <stdio.h>
#include "interchange.h"

void interchange(int * u, int * v) {

	int temp;

	temp = *u;
	*u = *v;
	*v = temp;
}
