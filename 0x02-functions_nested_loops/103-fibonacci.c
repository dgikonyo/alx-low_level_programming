#include <stdio.h>
/**
 * main - finds and prints the sum of the
 * even valued terms followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int count, sum, j, k, next;

	j = 1;
	k = 2;
	sum = 0;

	for (count = 1; count <= 33; ++count)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;

	}
	printf("%ld\n", sum);
	return (0);
}
