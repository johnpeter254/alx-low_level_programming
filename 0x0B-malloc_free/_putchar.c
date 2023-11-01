#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes character to std output
 * @c: character to write
 *
 * Return: written character 
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
