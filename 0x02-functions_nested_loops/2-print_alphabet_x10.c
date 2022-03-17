#include "main.h"

/*
 * print_alphabet_x10 - Entry point
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int limit=10;
	int i=1;
	char alphabet ='a';

	while (i <= limit)
	{
		while (alphabet <= 'z')
		{	
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
	}
}
