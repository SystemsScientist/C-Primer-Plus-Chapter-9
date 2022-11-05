// main.c, Exercise 2, Chapter 9, C Primer Plus
//
// Devise a function chline(ch, i, j) that prints
// the requested character in columns i through j.
// Test it in a simple driver.
// 
// compile main.c with chline.c by using the 
// following command-line scripts:
// $ gcc main.c chline.c -o main
// $ ./main

#include <stdio.h>
#include "chline.h"

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
