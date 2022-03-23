#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, next;

	j = 1;
	k = 2;
	printf("%d, %d", j, k);
	for (i = 3; i <= 50; ++i)
	{
		next = j + k;
		if (j != 20365011074)
		{
			printf(", %d", next);
		}
		else
		{
			printf("%d\n", next);
		}
		j = k;
		k = next;
	}

	return (0);
}
