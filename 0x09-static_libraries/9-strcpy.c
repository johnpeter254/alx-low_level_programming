#include "main.h"

/**
 * _strcpy - copies string from src to dest
 * @dest: pointer to destinatiom
 * @src: pointer to source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
