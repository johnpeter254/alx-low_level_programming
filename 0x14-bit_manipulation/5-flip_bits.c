#include "main.h"

/**
 * flip_bits - Returns number of bits needed to flip
 * @n: first unsigned long integer
 * @m: 2nd unsigned long integer
 *
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
