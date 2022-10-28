#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On success prints 1
* on error it prints -1, and  the error number willbe set appropriately.
*/


int _putchar(char c)
{

	return (write(1, &c, 1));
}
