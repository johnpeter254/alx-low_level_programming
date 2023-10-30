#include "main.h"
#include "stdio.h"

/**
 * main - executes program
 * @argc: number of integers
 * @argv: number of string
 *
 * Return: Always (0)
 */

int main(int argc __attribute__((unused)),
		char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
