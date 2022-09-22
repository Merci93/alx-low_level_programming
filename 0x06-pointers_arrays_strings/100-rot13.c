#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @c: string to be encoded
 * Return: encoded string
 */

char *rot13(char c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		while ((c[i] >= "a" && c[i] <= "z") || (c[i] >= "A" && c[i] <= "Z"))
		{
			if ((c[i] >= "a" && c[i] <= "m") || (c[i] >= "A" && c[i] <= "M"))
			{
				c[i] += 13;
			}
			else
			{
				c[i] -= 13;
			}
			i++;
		}
		i++;
	}
	return (c);
}
