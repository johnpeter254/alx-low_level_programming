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

/*loop through lower case*/
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha); /*print lowercase*/
	}
/*loop through uppercase*/
		for (alpha = 'A'; alpha <= 'Z'; alpha++)
		{
			putchar(alpha);/*print uppercase*/
		}
	
	putchar('\n');/*move to next line*/

	return (0);/*return success*/
}
