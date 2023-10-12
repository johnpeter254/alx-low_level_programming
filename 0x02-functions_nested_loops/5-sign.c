#include "main.h"
#include <stdio.h>
/**
 * print_sign - prints the sign of a given number
 *
 * @n: number to check
 *
 * Return: (1) and print + if n > 0 , (0) and print 0 if n=0,
 * -1 and print - if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
