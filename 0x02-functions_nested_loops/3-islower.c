#include "main.h"

/**
 * _islower - check for lowcase
 * @c: the char to check
 * Return: 1 if c is lowcase , otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
