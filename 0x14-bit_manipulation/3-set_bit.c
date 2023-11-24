#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at given index
 * @n: pointer to unsigned long integer
 * @index: index of bit to set
 *
 * Return: 1 if okay -1 if yet
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1ul << index);
	return (1);
}
