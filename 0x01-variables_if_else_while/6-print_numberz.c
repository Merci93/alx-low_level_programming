#include <stdio.h>

/**
 * main - print numbers using putchar
 * Return: 0 if successful
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
