#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - a function that returns a pointer to duplicate string
 * @str: string whose pointer dublicate is to be returned
 * Return: Null if str is NULL or pointer to dublicate.
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[i] = str[i]) != '\0')
		i++;

	return (duplicate);
}
