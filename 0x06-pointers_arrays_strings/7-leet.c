#include "main.h"

/**
 * leet - encodes string into 1337
 * @str: string to be encoded
 *
 * Return: pointer to encoded string
 */

char *leet(char *str)
{
	char *letters = "aeotlAEOTL";
	char *leetcode = "430711";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leetcode[j / 2];
				break;
			}
		}
	}
	return (str);
}
