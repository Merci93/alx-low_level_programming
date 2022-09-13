#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case, followed by a new line
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
