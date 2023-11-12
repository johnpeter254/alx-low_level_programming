#include <unistd.h>

/**
 * _putchar - prints character to std output
 * @c: character to be written
 *
 * Return: number of bytes written is returned
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
