#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints last digit
 *
 * @n: int to print last digit
 *
 * Return: last value of the digit
 */
int print_last_digit(int n)
{
	int lastuno;

	lastuno = n % 10;

	if (lastuno < 0)
		lastuno = -lastuno;

	_putchar(lastuno + '0');

		return (lastuno);
}
