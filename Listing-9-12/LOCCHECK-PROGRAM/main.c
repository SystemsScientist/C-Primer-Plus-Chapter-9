// main.c -- drives program
// compile main.c with mikado.c by using the following
// command-line scripts:
// $ gcc main.c mikado.c -o main
// $ ./main

#include <stdio.h>
#include "mikado.h"

int main(void) {

	int pooh = 2, bah = 5;

	printf("In main(), pooh = %d and &pooh = %p\n",
		pooh, &pooh);
	printf("In main(), bah = %d and &bah = %p\n",
		bah, &bah);

	mikado(pooh);

	return 0;
}
