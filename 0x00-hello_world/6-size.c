#include <stdio.h>

/**
 * main prints size of various types on the computer it is compiled and run on
 * return: returns the value 0 at the end
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n",sizeof(char));
	printf("Size of a int: %d byte(s)\n",sizeof(int));
	printf("Size of a long int: %d byte(s)\n",sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n",sizeof(long long int));
	printf("Size of a float: %d byte(s)\n",sizeof(float));
	return (0);

}