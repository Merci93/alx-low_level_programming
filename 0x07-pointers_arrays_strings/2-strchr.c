#include "main.h"
#include <stdio.h>

/**
 * *_strchr - a function that locates a character in a string
 * @c: character to be located
 * @s: string to be searcher
 * Return: pointer to the first character occurrence or NULL if none
 */

char *_strchr(char *s, char c)
{
	while (1)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
	{
		return (s);
	}
	return (NULL);
}
