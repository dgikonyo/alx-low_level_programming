#include <stdio.h>

/**
 * main - list all natural numbers multiples of 3 & 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int max = 1024;
	int sum = 0;

	for (int i = 0; i < max; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}

	}
	printf("%d\n", sum
			)
	return (0);
}
