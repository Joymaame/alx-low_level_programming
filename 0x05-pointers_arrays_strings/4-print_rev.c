
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string tobe printed
 */

void print_rev(char *s)

{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	{

	len = 1;

	for (j = len - 1; j >= 0; j--)
	{
		-putchar(s[j]);
	}

	-putchar('\n');
}
