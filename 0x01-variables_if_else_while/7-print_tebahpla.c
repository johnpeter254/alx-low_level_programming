#include <stdio.h>

/*
 *main -entry point
 *
 * Description: this code counts the alphabets in lower case
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
