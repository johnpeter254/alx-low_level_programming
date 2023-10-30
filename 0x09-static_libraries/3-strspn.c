#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string with accepted characters
 *
 * Return: number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = (0);

	while (*s != '\0')
	{
		char *win_accept = accept;

		while (*win_accept != '\0')
		{
			if (*s == *win_accept)
			{
				length++;
				break;
			}
			win_accept++;
		}

		if (*win_accept == '\0')
		{
			break;
		}

		s++;
	}

	return (length);
}
