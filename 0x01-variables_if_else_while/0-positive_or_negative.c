#include <stdio.h>

/**
 * main assigns a random number to int n,
 * and it executive and print a int value
 * Return: the final result is always 0 and shows 'success'
 */

int main(void)
{
	int n;

	if (n > 0)
		printf("is positive%d\n", n);
	else if (n == 0)
		printf("is zero%d\n", n);
	else if (n < 0)
		printf("is negative%d\n", n);
	return (0);
}
