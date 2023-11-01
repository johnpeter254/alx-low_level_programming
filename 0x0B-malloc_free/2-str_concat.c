#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new allocated space containing conc strings
 */

char *str_concat(char *s1, char *s2)
{
	int length_s1 = 0;
	int length_s2 = 0;
	char *concatenated;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length_s1] != '\0')
		length_s1++;

	while (s2[length_s2] != '\0')
		length_s2++;

	concatenated = (char *)malloc((length_s1 + length_s2 + 1)
			 * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < length_s1; i++)
		concatenated[i] = s1[i];

	for (i = 0; i < length_s2; i++)
		concatenated[length_s1 + i] = s2[i];

	concatenated[length_s1 + length_s2] = '\0';

	return (concatenated);
}
