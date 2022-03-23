#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, k, next;

	j = 1;
	k = 2;
	next = j + k;
	printf("%lu, %lu,", j, k);
	for (i = 1; i <= 98; ++i)
	{
		if (j != 20365011074)
		{
			printf("%lu, ", j);
		}
		else
		{
			printf("%lu\n", j);
		}
		printf("%lu, ", next);
		j = k;
		k = next;
		next = j + k;
	}

	return (0);
}
