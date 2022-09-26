#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: destination area to store info
 * @src: memrory source location
 * @n: bites to be copied from memory area
 *
 * Return - will return pointer to 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
