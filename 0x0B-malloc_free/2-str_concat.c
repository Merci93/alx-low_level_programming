#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string or NULL otherwise.
 */

char *str_concat(char *s1, char *s2)
{
	char *res;
	unsigned int i;
	unsigned int len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	res = malloc(sizeof(char) * (len1 + len2 + 1));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < (len1 + len2); i++)
	{
		if (i < lens1)
		{
			res[i] = *s1;
			s1++;
		}
		else
		{
			res[i] = *s2;
			s2++;
		}
	}
	res[i] = '\0';
	return (res);
}
