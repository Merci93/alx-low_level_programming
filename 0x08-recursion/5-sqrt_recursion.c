#include "main.h"

int find_sqrt(int a, int b);

/**
 * _sqrt_recursion - a fucntion returns the natural root of a number
 * @n: integer to find its natural root
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (find_sqrt(1, n));
}

/**
 * find_sqrt - find square root
 * @a: previous value
 * @b: square root value
 * Return: the square root
 */
int find_sqrt(int a, int b)
{
	if (a > b)
		return (-1);
	else if (a * a == b)
		return (a);
	return (find_sqrt(a + 1, b));
}
