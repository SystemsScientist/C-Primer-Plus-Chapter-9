// recur.c -- illustrates recursion
// Omits second print statement in
// up_and_down function

#include <stdio.h>

void up_and_down(int); // function prototype

int main(void) {

	up_and_down(1);

	return 0;
}

void up_and_down(int n) {

	printf("Level %d: n location %p\n", n, &n); // 1
	if (n < 4)
		up_and_down(n + 1);
}
