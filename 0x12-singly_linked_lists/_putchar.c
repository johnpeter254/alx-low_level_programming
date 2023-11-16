#include <unistd.h>
#include "lists.h"

/**
 * _putchar - writes character to std output
 * @c: character to print
 *
 * Return: on success 1
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
