#include <stdio.h>

/**
 * main - print numbers using putchar
 * Return: 0 if successful
 */

int main(void)
{
	int n;

	for (n = 1; n < 11; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
