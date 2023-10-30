#include "main.h"

/**
 * _puts - prints string followed by newline
 * @str: string to print
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
