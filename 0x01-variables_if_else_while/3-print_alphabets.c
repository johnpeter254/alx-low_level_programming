#include <stdio.h>

/*
 *
 *main -  entry point main
 *
 *
 *
 * return (0) success
 *
 */

int main(void)
{
	char alpha;
	char letter;
/*loop through lower case*/
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
/*loop through uppercase*/
		for (letter = 'A'; letter <= 'Z'; letter++)
		{
			putchar(alpha);/*print lower case*/
			putchar(letter);/*print uppercase*/
		}
	}
	putchar('\n');/*move to next line*/

	return (0);/*return success*/
}
