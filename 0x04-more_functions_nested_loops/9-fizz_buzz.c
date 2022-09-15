#include <stdio.h>

/**
 * main - prints out FizzBuzz
 * Return: 0 Always
 */
int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			if (x % 3 == 0)
			{
				printf("Fizz");
				putchar(' ');
			}
			if (x % 5 == 0)
			{
				printf("Buzz");
			}
			printf("FizzBuzz");
			putchar(' ');
		}
		else
		{
			printf("%d", x);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
