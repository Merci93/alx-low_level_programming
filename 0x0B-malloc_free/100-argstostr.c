#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - a function that concatenates all the arguments of a program
 * @ac: number of arguments to concatenate
 * @av: array of arguments
 * Return: pointer to a new string, or NULL id=f fails
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int len, i, j;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	len++;

	string = malloc(sizeof(char) * (len + 1));

	if (string == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			string[k] = av[i][j];
			k++;
		}
		string[k] = '\n';
		k++;
	}
	return (string);
}
