#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a finction that prints the sum of
 * two diagonals of a square matrix of integers
 * @a: square matrix
 * @size: size of the matrix
 * Return: 0 always
 */

void print_diagsums(int *a, int size)
{
	int i;
	int max = size * size;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < max; i += size + 1)
		sum1 += a[i];
	for (i = size - 1; i < max -1; i += size -1)
		sum2 += a[i];
	print("%d, %d\n", sum1, sum2);
}
