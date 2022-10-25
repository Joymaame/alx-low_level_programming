#include "main.h"

/**
 * _stren- returns the length of string
 * @s:string to check length
 * Return:returns the length of the string
 */

int _strlen(char *s)
{
	int i;
	
	i = 0;
	
	while (s[i] != '\0')
	{
		i++;
	}

	return(i);
}
