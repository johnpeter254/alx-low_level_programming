#include <stdio.h>

/*
 * main - Prints alphabet in lower case
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alpha;

/* loop through a-z */
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar (alpha);
	}
	putchar('\n');

	return (0);
}
