#include <stdio.h>

/**
 * main - print base 16 values
 * Return: 0 if successful
 */

int main(void)
{
	int x;
	char c;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
