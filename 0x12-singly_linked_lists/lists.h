#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - a structure representing a node in a linked list
 * @str: string data stored in node
 * @len: length of string
 * @next: pointer to next node in list
 */

typedef struct list_s
{
	char *str;
	int len;
	struct list_s *next;
}
list_t;

size_t print_list(const list_t *h);
int _putchar(char c);

#endif
