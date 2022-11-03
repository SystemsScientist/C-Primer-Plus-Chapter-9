// min.c, Exercise 1, Chapter 9, C Primer Plus
//
// Device a function called min(x, y) that returns
// the smaller of two double values. Test the function
// with a simple driver.
//
// compile min.c with main.c by using the following
// command-line scripts:
// $ gcc main.c min.c -o findmin
// $ ./findmin

#include "min.h"

double min(double x, double y) {

	double min;

	if (x < y)
		min = x;
	else
		min = y;

	return min;
}
