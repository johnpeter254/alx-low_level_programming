#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: first value to be swapped
 * @b: second value to be swapped
 */

void swap_int(int *a, int *b)
{
	int z = *a;

	*a = *b;
	*b = z;
}
