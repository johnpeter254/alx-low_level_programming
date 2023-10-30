#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches string for any set of data types
 * @s: string
 * @accept: set of bytes to search for
 *
 * Return: pointer to the byte in s that matches bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *pre_accept = accept;

		while (*pre_accept != '\0')
		{
			if (*s == *pre_accept)
			{
				return (s);
			}
			pre_accept++;
		}

		s++;
	}

	return (NULL);
}
