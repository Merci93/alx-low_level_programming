#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: length of the line
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		
		for (i = 1; i <= n; i++)
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}
