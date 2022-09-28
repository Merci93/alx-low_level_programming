#include "main.h"

/**
 * factorial - a function that prints the factorial of a given number
 * @n: integer to calculate its factorial
 * Return: factorial of integer n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
