// lethead.c

#include <stdio.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void); // prototype function

int main(void) {

	starbar(); // call function
	printf("%s\n", NAME);
	printf("%s\n", ADDRESS);
	printf("%s\n", PLACE);
	starbar(); // call function

	return 0;
}

void starbar(void) { // define function

	int count;

	for (count = 1; count <= WIDTH; count++)
		putchar('*');
	putchar('\n');
}
