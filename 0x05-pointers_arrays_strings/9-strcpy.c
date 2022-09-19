#include "main.h"

/**
 * _strcpy - copies a sring pointed to by src to the buffer dest
 * @src: pointer to string to be copied
 * @dest: pointer to string destination
 * Return: pointer to dest
 */

/*char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (tmp);
}*/

char *_strcpy(char *dest, char *src)
{
        int len = 0;
        int i;

        while (src[len] != '\0')
        {
                len++;
        }

        for (i = 0; i < len; i++)
        {
                dest[i] = src[i];
        }
        dest[i] = '\0';

        return (dest);
}
