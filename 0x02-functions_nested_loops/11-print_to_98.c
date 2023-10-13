#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n - 98
 * followed by new line
 *
 * @n: number to be printed from
 */

void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i < 98)
				printf(", ");
			else
				printf("\n");
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);

			if (j > 98)
				printf(", ");
			else
				printf("\n");
		}
	}
}
