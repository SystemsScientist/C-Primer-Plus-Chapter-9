// Exercise 2, Chapter 9, Primer Plus
//
// Devise a function chline(ch, i, j) that prints
// the requested character in columns i through j.
// Test it in a simple driver.

#include <stdio.h>

void chline(char, unsigned int, unsigned int);

int main(void) {

	char ch;
	unsigned int i, j;

	printf("Enter a character and two numbers (q to quit): ");
	while (scanf("%c %u %u", &ch, &i, &j) == 3) {
		chline(ch, i, j);
		printf("\n");

		while (getchar() != '\n')
			continue;
		printf("Enter a character and two numbers (q to quit): ");		
	}

	return 0;
}

void chline(char ch, unsigned int i, unsigned int j) {
	
	unsigned int col;

	for (col = 1; col < i; col++)
		putchar(' ');

	for (; col <= j; col++)
		putchar(ch);
}
