// lesser.c -- finds the lesser of two evils

#include <stdio.h>

int imin(int, int); // function prototype

int main(void) {    // function definition (main is also called the "driver")

	int evil1, evil2;
	
	// function calls: printf(), scanf(), and imin()
	printf("Enter a pair of integers (q to quit): \n");
	while (scanf("%d %d", &evil1, &evil2) == 2) {
		printf("The lesser of %d and %d is %d.\n",
			evil1, evil2, imin(evil1, evil2));
		printf("Enter a pair of integers (q to quit): \n");
	}
	printf("Bye.\n");

	return 0;
}

int imin(int n, int m) { // function definition

	int min;

	if (n < m)
		min = n;
	else
		min = m;
	
	return min;
}
