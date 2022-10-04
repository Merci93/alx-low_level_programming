#include <stdlib.h>
#include "main.h"

/**
 * *create_array - a function that creates n array of chars, and initializes it
 * with a specific character
 * @size: size of array
 * @c: character to initialize array
 * Return: pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
