#include "main.h"
/**
 * _isalpha - checks if it is an alphabetic character
 * @c: is the char to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))

		return (1);
	else
		return (0);
}
