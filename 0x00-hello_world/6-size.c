#include <stdio.h>

/*
 * main -entry point
 *
 * Description: Prints the size o various types on the computer it is
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

	printf("Size of char: %lu byte(s) \n",sizeof(charType));
	printf("Size of int: %lu byte(s) \n",sizeof(aInt));
	printf("Size of long int: %lu byte(s) \n",sizeof(longInt));
	printf("Size of long long int: %lu byte(s) \n",sizeof(longLongIntType));
	printf("Size of float: %lu byte(s) \n",sizeof(floatType));


	return (0);
}
