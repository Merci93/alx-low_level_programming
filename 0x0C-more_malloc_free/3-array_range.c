#include <stdlib.h>
#include "main.h"

/**
 * *array_range - a function that creates an array of integers
 * @min: minimum inclusive value
 * @max: maximum inclusive value
 * Return: pointer to created array
 */

int *array_range(int min, int max)
{
	int *_array;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min;
	_array = malloc(sizeof(int) * (size + 1));

	if (_array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		_array[i] = min++;

	return (_array);
}
