#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at given index
 * @n: pointer to unsigned long int
 * @index: index of the bit to clear
 *
 * Return: 1 if okay -1 if yet
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1ul << index);
	return (1);
}
