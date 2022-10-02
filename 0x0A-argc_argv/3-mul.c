#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: product of two numbers, error if otherwise
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
}
