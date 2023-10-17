#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an arrayof integers
 * @a: pointer to array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(",");
		}
	}
	printf("\n");
}
