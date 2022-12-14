#include "main.h"

int prime_number(int n, int x);

/**
 * is_prime_number - A function that checks if an integer is a prime number
 * @n: integer to check
 * Return: 1 if number is prime, else return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}

/**
 * prime_number - calculate prime number
 * @n: integer to evaluate
 * @x: result of division check
 * Return: 1 if prime, 0 if not
 */

int prime_number(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (prime_number(n, x - 1));
}
