#include "main.h"
/**
 * print_sign - check numers
 * @n : number to check
 * Return:0 or 1
 */
int print_sign(int n)
{
	char posSign = '+';
	char negSign = '-';


	if (n > 0)
	{
		_putchar(posSign);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(negSign);
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
