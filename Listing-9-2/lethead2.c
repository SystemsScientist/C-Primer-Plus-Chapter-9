// lethead2.c

#include <stdio.h>
#include <string.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char, int); // function prototype

int main(void) {

	int spaces;
	
	/* code for name, where indentation is 12 spaces */
	show_n_char('*', WIDTH); // using constants as arguments
	putchar('\n');
	show_n_char(SPACE, 12);  // using constants as arguments
	printf("%s\n", NAME);
	
	/* code for address, where indentation is 11 spaces */
	spaces = (WIDTH - strlen(ADDRESS)) / 2; // Let the program calculate 
						// how many spaces to skip
	show_n_char(SPACE, spaces); // use a variable as an argument
	printf("%s\n", ADDRESS);
	
	/* code for place, where indentation is 10 spaces */
	show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2); // use an expression as an argument

	printf("%s\n", PLACE);
	show_n_char('*', WIDTH);
	putchar('\n');

	return 0;
}

void show_n_char(char ch, int num) { // function definition

	int count;

	for (count = 1; count <= num; count++)
		putchar(ch);
}
