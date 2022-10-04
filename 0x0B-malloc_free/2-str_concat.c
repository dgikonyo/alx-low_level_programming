#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *str3;
	unsigned int index = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	str3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str3 == NULL)
		return (NULL);

	index = 0;
	j = 0;

	if (s1)
	{
		while (index < len1)
		{
			s3[index] = s1[index];
			index++;
		}
	}

	if (s2)
	{
		while (index < (len1 + len2))
		{
			s3[index] = s2[j];
			index++;
			j++;
		}
	}
	str3[index] = '\0';

	return (str3);
}
