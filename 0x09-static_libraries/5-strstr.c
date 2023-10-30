#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *pre_haystack = haystack;
		char *pre_needle = needle;

		while (*pre_needle != '\0' && *pre_haystack == *pre_needle)
		{
			pre_haystack++;
			pre_needle++;
		}

		if (*pre_needle == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
