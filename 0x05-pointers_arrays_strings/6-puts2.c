#include "main.h"

/**
 * puts2 - prints every other character of a string followed buy \n
 * @str: character to print
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
		_putchar(str[i]);
		}

		i += 2;
	}
	_putchar('\n');
}
