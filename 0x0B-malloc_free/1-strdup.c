#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates string
 * @str: string to duplicate
 *
 * Return: pointer to allocated space containing duplicated string
 * or NULL if mem allocation fails
 */

char *_strdup(char *str)
{
	int length = 0;
	char *duplicate;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
