#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 *
 * Return: pointer to allocated space containing concatenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int win_s1 = 0, win_s2 = 0;
	char *concatenated;
	unsigned int i, j;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[win_s1] != '\0')
		win_s1++;

	while (s2[win_s2] != '\0')
		win_s2++;

	concatenated = (char *)malloc((win_s1 + n + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < win_s1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < n && j < win_s2; j++)
		concatenated[win_s1 + j] = s2[j];

	concatenated[win_s1 + j] = '\0';

	return (concatenated);
}
