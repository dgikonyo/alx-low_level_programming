#include "main.h"

void print_to_98(int n)
{
	if (n > 98)
	{
		for (n; n >= 98; n--)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if ( n == 98 )
	{
		_putchar(98);
	}
	else
	{
		for (n; n <= 98;n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
}
