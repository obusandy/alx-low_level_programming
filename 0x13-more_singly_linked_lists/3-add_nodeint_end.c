#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the head node
 * @n: interger value to insert in the new element
 * Return: pointer to the new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nod;
	listint_t *temp = *head;

	new_nod = malloc(sizeof(listint_t));
	if (!new_nod)
		return (NULL);

	new_nod->n = n;
	new_nod->next = NULL;

	if (*head == NULL)
	{
		*head = new_nod;
		return (new_nod);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_nod;

	return (new_nod);
}
