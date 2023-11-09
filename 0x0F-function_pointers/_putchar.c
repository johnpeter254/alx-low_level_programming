#include <unistd.h>

/**
 * _putchar - writes character to std output
 * @c: character to be written
 *
 * Return: number of characters written
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
