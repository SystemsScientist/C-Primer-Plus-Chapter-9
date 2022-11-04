// interchange.c

#include <stdio.h>
#include "interchange.h"

void interchange(int u, int v) {

	int temp;

	printf("Originally u = %d and v = %d.\n", u, v);

	temp = u;
	u = v;
	v = temp;

	printf("Now u = %d and v = %d.\n", u, v);
}
