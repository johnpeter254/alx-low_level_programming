#include "main.h"

/**
 * _strlen - returns leng of string
 * @s: pointer to string
 * Return: length of string
 */

int _strlen(char *s);
{
	int l = (0);

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}
