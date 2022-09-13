#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: integer value
 * Return: last digit
 */

int print_last_digit(int n)
{
	int x;

	if (n > 0)
		x = n % 10;
	else
		x = -1 * (n % 10);

	_putchar((n % 10) + '0');
	return (n % 10);
}
