#include <stdio.h>

/**
 * main - a function that prints its name, followed by a new line
 * @argc: argument count
 * @argv: vector array of arguments
 * Return: 0 if successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s"\n", argv[0]);

	return (0);
}
