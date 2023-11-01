#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars and initializes
 * with specific char
 * @size: size of array
 * @c: character to innitialize array with
 *
 * Return: pointer to created array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	
	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
