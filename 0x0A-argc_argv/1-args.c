#include <stdio.h>

/**
 * main -> this is a function to print its name
 * argc: argc paramter
 * argv: an array of a command listed
 * Return: 0 for success
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
