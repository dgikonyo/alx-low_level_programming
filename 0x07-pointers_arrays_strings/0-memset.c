#include "main.h"

/**
 * *_memset -  function that fills memory with a constant byte
 * @s -  memory loctoin to be filled
 * @b - value to be passed to 's'
 * @n - number of times 'b' will be repeated
 *
 * Return - pointer to the memory area 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}

	return (s);
}
