#include "main.h"

/**
 * get_bit - returns the value of bit at a given index
 * @n: unsigned long integer
 * @index: index of the bit to retrieve
 *
 * Return: value of hte bit at the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
