#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate with s1
 * Return: pointer to the result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	result = malloc(len1 + n + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < (len1 + n); i++)
	{
		if (i < len1)
			result[i] = *s1, s1++;
		else
			result[i] = *s2, s2++;
	}
	result[i] = '\0';
	return (result);
}
