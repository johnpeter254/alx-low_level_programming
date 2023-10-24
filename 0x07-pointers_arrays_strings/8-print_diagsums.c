#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: pointer to square matrix
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int main_diag = 0;
	int sec_diag = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		main_diag += a[i * size + i];

		sec_diag += a[i * size + (size - 1 - i)];
	}

	printf("%d, ", main_diag);

	printf("%d\n", sec_diag);
}
