#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to a previously allocated memory
 * @old_size: old size in bytes of allocated memory for ptr
 * @new_size: new size in bytes of the new memory block
 * Return: pointer to the new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr_[i];
	}

	free(ptr);
	return (new_ptr);
}
