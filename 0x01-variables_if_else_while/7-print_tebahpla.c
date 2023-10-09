#include <stdio.h>

/**
 * main -entry point
 *
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alpha;

/* loop through a-z */
	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar (alpha);
	}
	putchar('\n');

	return (0);
}
