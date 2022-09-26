#include "main.h"

/**
 * *_memset -  function that fills memory with a constant byte
 * @s: memory loctoin to be filled
 * @b: char to be passed 
 * @n: number of times b will be repeated
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}

	return (s);
}
