#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for integer in array
 * @array: pointer to array
 * @size: number of elements in array
 * @cmp: pointer to the comparison function
 *
 * Return: index of the first elemnt which cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
