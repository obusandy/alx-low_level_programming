#include <stdlib.h>
#include "lists.h"
/**
 *delete_nodeint_at_index - deletes the node at index of a linked list.
 *@head: A pointer to a pointer to the head of the linked list
 *@index: The index of the node to be deleted,from 0
 *Return: 1 if successful, -1 if the node cannot be deleted
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *tmp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	curr = *head;

	for (i = 0; curr != NULL && i < index - 1; i++)
	{
		curr = curr->next;
	}

	if (curr == NULL || curr->next == NULL)
		return (-1);

	tmp = curr->next;
	curr->next = tmp->next;
	free(tmp);

	return (1);
}
