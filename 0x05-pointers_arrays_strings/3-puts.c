#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		_puchar(str[c]);
	}
	_putchar('\n');
}
