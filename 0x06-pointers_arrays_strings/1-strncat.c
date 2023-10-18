#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to concatenate
 *
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return result;
}
