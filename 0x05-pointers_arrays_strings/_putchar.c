#include <unistd.h>

/**
 * _putchar - writes character to std output
 * @c: the character to be written
 *
 * Return: on success character
 * on error, -1 is returned and error number is set vile inafaa
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
