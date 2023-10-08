#include <stdio.h>
/*
 *
 *main - code executes
 *
 *
 * return (0)-success
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');

	return (0);
}
