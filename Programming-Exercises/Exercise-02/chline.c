// chline.c

#include <stdio.h>
#include "chline.h"

void chline(char ch, unsigned int i, unsigned int j) {

	unsigned int col;

	for (col = 1; col < i; col++)
		putchar(' ');

	for (; col <= j; col++)
		putchar(ch);
}
