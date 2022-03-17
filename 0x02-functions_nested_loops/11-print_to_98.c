#include "main.h"

void print_to_98(int n)
{	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i);
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
		for (i = n; i <= 98; i++)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}
}
