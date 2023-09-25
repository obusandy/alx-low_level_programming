#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the head node in the linked list
 * Return: the data inside the elements that was deleted or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int dgt;

	if (!head || !*head)
		return (0);

	dgt = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (dgt);
}
