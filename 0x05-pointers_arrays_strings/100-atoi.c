#include "main.h"
#include <stdio.h>

/**
 * _atoi - a function that converts string to integer
 * @s: An input string
 * Return: integer from conversion
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	char check = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			check = 1;
			total = total * 10 + *s - '0';
		}

		else if (check)
			break;
		s++;
	}

	if (sign < 0)
		total = (-total);

	return (total);
}
