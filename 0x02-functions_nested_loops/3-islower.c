#include "main.h"

/*
 *
 * islower - check for lower case letter
 * @c: character to check
 * Return: if c is lowercase ,0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
