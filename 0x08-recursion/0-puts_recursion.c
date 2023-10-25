#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints string followed by new line
 * @s: pointer to string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');

		return;

	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
