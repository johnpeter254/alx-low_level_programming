#include "lists.h"

/**
 * listint_len - Returns number of elements in a listint_t
 * @h: Pointer to the head of listint_t list
 *
 * Return: Number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
