# include "main.h"

/**
 * puts2 - prints one char out of 2 strings
 * this printed followed by a new line
 * @str: string to print the char from
 */

void puts2(char *str)
{

	i = 0;

	for (; str[i] != '\0' i++)

	{

		if ((i % 2) == 0)

			_putchar(str[i]);

		else
			continue;
	}

	_putchar('\n');
}
