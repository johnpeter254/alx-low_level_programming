#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes head node of a linked list
 * @head: pointer to pointer to head of list
 *
 * Return: data (n) of the headnode
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
