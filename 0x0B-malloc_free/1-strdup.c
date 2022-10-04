#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int index, len;

	len = 0;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (str == NULL || duplicate== NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		duplicate[index] = str[index];
		len++;
	}

	duplicate[len] = '\0';
	return (duplicate);
}
