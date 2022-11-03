// Exercise 1, Chapter 9, C Primer Plus
//
// Devise a function called min(x, y) that returns
// the smaller of two double values. Test the
// function with a simple driver.

#include <stdio.h>

double min(double, double);

int main(void) {
	
	double value1, value2;

	printf("Enter two numbers to check which number is smaller (q to quit): \n");
	while (scanf("%lf %lf", &value1, &value2) == 2) {
		printf("The lesser of %.2lf and %.2lf is %.2lf.\n", 
			value1, value2, min(value1, value2));
		printf("Enter two integers to check which number is smaller (q to quit): \n");
	}
	printf("Thanks for checking!\n");

	return 0;
}

double min(double x, double y) {

	double min;

	if(x < y)
		min = x;
	else
		min = y;

	return min;
}
