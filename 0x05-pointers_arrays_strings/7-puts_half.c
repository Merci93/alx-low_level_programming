#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print from
 */

void puts_half(char *str)
{
	int len = 0;
	int i, j;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len + 1) / 2;
	}

	for (j = i; j < len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
