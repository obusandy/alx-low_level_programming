#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: head node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *current = head;

	while (current && j < index)
	{
		current = current->next;
		j++;
	}

	return (current ? current : NULL);
}
