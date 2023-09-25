#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to the head node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_nod;
	listint_t *current = *head;

	new_nod = malloc(sizeof(listint_t));
	if (!new_nod || !head)
		return (NULL);

	new_nod->n = n;
	new_nod->next = NULL;

	if (idx == 0)
	{
		new_nod->next = *head;
		*head = new_nod;
		return (new_nod);
	}

	for (i = 0; current && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_nod->next = current->next;
			current->next = new_nod;
			return (new_nod);
		}
		else
			current = current->next;
	}

	return (NULL);
}
