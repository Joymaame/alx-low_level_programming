#include "main.h"

/**
 *swap_int-interchanges the values of integers a and b
 *@a:pointer to value one
 *@b:pointer to value two
 */


void swap_int (int *a, int *b)

{
	int c;

	c = *a;

	*a = *b;

	*b = c;
}
