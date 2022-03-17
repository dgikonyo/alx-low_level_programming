#include "main.c"

int print_sign(int n)
{
	int n=0;
	char posSign='+';
	char negSign='-';


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
		_putchar(0);
		return (0);
	}
}
