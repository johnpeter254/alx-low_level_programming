#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - Returns the node of a linked list
 * @head: pointer to head of tge listint_t list
 * @index: index of node
 *
 * Return: the nth node]
 */

listint *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; current!= NULL && i < index; i++)
	{
		current = current->next;
	}

	return (current);
}
