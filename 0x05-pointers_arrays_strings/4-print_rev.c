#include "main.h"

/**
 * print_rev - prints string in reverse followed by a new line
 * @s: the string
 */
void print_rev(char *s)
{
	/* Calculate the length of the string */
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--;

	/* Print the string in reverse order */
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
