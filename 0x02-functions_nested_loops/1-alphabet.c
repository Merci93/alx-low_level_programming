#include "main.h"

/**
 * main - print lowercase alphabets
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	char c = 'a';

	while(c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
