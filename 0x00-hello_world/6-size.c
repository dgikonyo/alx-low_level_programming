#include <stdio.h>

/*
 * main -entry point
 *
 * Description: Prints the size of various types on the computer it is
 * compiled on and run on
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int aInt;
	long int longInt;
	char charType;
	float floatType;
	long long int longLongIntType;

	printf("Size of a char: %lu byte(s) \n", (int)sizeof(charType));
	printf("Size of an int: %lu byte(s) \n", (int)sizeof(aInt));
	printf("Size of a long int: %lu byte(s) \n", (int)sizeof(longInt));
	printf("Size of a long long int: %lu byte(s) \n", (int)sizeof(longLongIntType));
	printf("Size of a float: %lu byte(s) \n", (int)sizeof(floatType));


	return (0);
}
