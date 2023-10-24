#include "main.h"
#include <stddef.h>

/**
 * _memset - fills memory with constant byte
 * @s: pointer to memory area to be filled
 * @b: constant byte to fill memory with
 * @n: number of bytes to fill
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (s == NULL || n == 0)
	{
		return (s);
	}
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
