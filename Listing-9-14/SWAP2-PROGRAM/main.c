// main.c
// compile main.c with interchange.c by using the following
// command-line scripts:
// $ gcc main.c interchange.c -o main
// $ ./main

#include <stdio.h>
#include "interchange.h"

int main(void) {

	int x = 5, y = 10;

	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(x, y);
	printf("Now x = %d and y = %d.\n", x, y);

	return 0;
}
