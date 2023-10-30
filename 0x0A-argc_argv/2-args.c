#include "main.h"
#include <stdio.h>

/**
 * main - code executes
 * @argc: number of integers in command line
 * @argv: number of strings in command line
 *
 * Return: Always (0)
 */

int main(int argc __attribute__((unused)),
		char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
