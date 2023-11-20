#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at a given position in the list
 * @head: pointer to pointer to the head of list
 * @index: index of node to be deleted
 *
 * Return: 1 if succeded
 */

int delete_nodeint_at_index(listint_t **head, insigned int index)
{
	unsigned int i;
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	current = *head;
	for (i = 0; current != NULL && i < index - 1; i++)
	{
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = currenr->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
