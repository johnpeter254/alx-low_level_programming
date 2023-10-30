#include "main.h"
#include <stdio.h>
/**
 * _abs - computes absolute value of integer
 *
 * @n: integer to compute absolute value for
 *
 * Return: int absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}
