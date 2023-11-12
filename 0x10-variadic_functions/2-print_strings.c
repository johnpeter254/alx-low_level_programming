#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the functions
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *current_str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		current_str = va_arg(args, const char *);

		if (current_str != NULL)
			printf("%s", current_str);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
