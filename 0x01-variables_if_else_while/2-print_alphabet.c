#include <stdio.h>

/**
 * main - print alphabets in lower case
 * Return: 0 if successful
 */

int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
