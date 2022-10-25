# include "main.h"

/**
 * puts2 - prints one char out of 2 strings
 * this printed followed by a new line
 * @str: string to print the char from
 */

void puts2(char *str)

{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		-putchar(str[i]);
	}

	-putchar('\n');
}
