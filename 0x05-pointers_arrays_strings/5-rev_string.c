#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char tmp;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (j < i--)
	{
		tmp = s[j];
		s[j++] = s[i];
		s[i] = tmp;
	}
}
