#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: int to be allocated memory
 * Return:pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		perror("Error: malloc failed");
		exit(98);
	}

	return (ptr);
}
