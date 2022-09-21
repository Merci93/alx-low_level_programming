#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string
 * Return: changed string
 */

char *string_toupper(char *)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
		{
			s[x] = s[x] - 32;
		}

	}
	return (s);
}
