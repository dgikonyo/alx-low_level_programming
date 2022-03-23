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
	i = 2;
	next = j + k;
	printf("%lu, %lu", j, k);
	while (i < 50)
	{
		next = j + k;
		i++;
		printf(", %lu", next);
		j = k;
		k = next;
	}

	return (0);
}
