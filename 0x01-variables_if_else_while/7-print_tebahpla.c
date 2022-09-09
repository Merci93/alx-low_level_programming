#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 * Return: o if succesful
 */

int main(void)
{
	char n = 'z';

	while (n != 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
