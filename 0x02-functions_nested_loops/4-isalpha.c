#include "main.h"

/**
 * _isalpha - checks for alphabetic charcters
 * @c: character to check
 * Return: 1 if upper or lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	answer = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
	return answer;
}
