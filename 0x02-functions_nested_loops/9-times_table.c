#include "main.h"
#include <stdio.h>
/**
 * times_table - prints out 9 times table
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			result = i * j;

			if (j == 0)
			{
				_putchar(result + '0');
			}
			if (result < 10 && i != 0)

			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
