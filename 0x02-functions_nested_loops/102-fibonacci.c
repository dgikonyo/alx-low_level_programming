#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, j, k, next;


	j = 1;
	k = 2;

	for (i = 3; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf(", %d", j);
		}
		else
		{
			printf("%d\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}

	return (0);
}
