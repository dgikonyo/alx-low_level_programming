#include "main.h"
/**
 * print_last_digit - return last digit
 * @n : number to check
 * Return:0 or 1
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;i
	}
	_putchar(last + '0');

	return (last);
}
