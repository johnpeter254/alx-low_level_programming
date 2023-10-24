#include "main.h"
#include <stddef.h>

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Return: origin_dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *origin_dest = dest;

	if (dest != NULL && src != NULL)
	{
		while (n > 0)
		{
			*dest = *src;
			dest++;
			src++;
			n--;
		}
	}

	return (origin_dest);
}
