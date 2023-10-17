#include "main.h"

/**
 * _strcpy - copies string from src to dest
 * @dest: pointer to destination
 * @src: pointer to source 
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *originaldest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return( originaldest);
}
