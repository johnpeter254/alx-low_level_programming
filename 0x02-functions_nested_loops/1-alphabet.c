#include "main.h"
/**
 * printAlphabet - print all alphabet in lower case
 *
 */


void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}
