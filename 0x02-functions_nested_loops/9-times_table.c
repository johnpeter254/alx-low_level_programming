#include "main.h"
#include <stdio.h>
/**
 * times_table - prints out 9 times table
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			_putchar((result / 100) + '0');
			_putchar(((result / 10) % 10) + '0');
			_putchar((result % 10) + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
