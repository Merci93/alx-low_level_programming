#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - a function that allocates memory for an array using malloc
 * @nmemb: memory space
 * @size: size of bytes to allocate
 * Return: pointer to memory space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem_space;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem_space = malloc(nmemb * size);

	if (mem_space == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(mem_space + i) = 0;

	return (mem_space);
}
