#include "main.h"
/**
 * print_times_table - produces an n times table
 * @n: number of the times table
 */

void print_times_table(int n)
{
	int rows, column, product;

	product = 1;

	if (n >= 0 && n <= 15)
	{
		for (rows = 0; rows <= n; rows++)
		{
			for (column = 0; column <= n; column++)
			{
				product = rows * column;

				if (column == 0)
				{
					_putchar(product + '0');
				}
				else if (product < 10 && column != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else if (product >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
