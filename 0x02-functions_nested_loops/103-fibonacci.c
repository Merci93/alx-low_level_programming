#include <stdio.h>

/**
 * main - print sum of even numbers in the fibonacci sequence
 * Return: 0 if succesful
 */

int main(void)
{
	int i;
	long int fib[40], sum = 0;

	fib[0] = 1;
	fib[1] = 2;

	for (i = 0; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if ((fib[i] % 2 == 0) && (fib[i] < 4000000))
			sum += fib[i];
	}
	printf("%ld\n", sum);
	return (0);
}
