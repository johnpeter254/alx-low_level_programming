#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints all characters
 * @format: list of type of arguments passed to functions
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *current_str;
	char separator = ',';

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				current_str = va_arg(args, char *);
				if (current_str != NULL)
					printf("%s", current_str);
				else
					printf("(nil)");
				break;
			default:
				separator = 0;
				break;
		}

		if (format[i + 1] != '\0' && separator != 0)
			printf("%c", separator);

		separator = ',';
		i++;
	}

	va_end(args);

	printf("\n");
}
