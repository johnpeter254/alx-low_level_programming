#include <unistd.h>

/**
 * _putchar - writes character
 * @c: character to print
 * Return: printed character , otherwise -1
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
