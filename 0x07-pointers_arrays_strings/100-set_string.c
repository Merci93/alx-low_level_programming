#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: pointer to a pointer
 * @to: pointer to string
 * Return: 0 if successful
 */

void set_string(char **s, char *to)
{
	*s = to;
}
