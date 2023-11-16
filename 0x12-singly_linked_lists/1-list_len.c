#include "lists.h"
#include <stddef.h>

/**
 * list_len - Returns the number of elements in linked list_t
 * @h: pointer to head of linked list
 *
 * Return: number of elements i the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
