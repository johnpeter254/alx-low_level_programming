#include <unistd.h>

/**
 * _putchar - writes character to stnd output
 * @c: character to print
 *
 * Return: on success 1
 * On error, -1 is returned
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
