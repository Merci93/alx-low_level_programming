#include <stdio.h>

/**
 * main - print sum of even numbers in the fibonacci sequence
 * Return: 0 if succesful
 */

int main(void)
{
	int i;
	long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i < 50; i++)
	{
		if ((j % 2) == 0 && j < 4000000)
		{
			sum += j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%lu\n", sum);
	return (0);
}
