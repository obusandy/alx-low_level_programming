#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the head node
 * @n: intereger value to add
 * Return: pointer to the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nod;

	new_nod = malloc(sizeof(listint_t));
	if (!new_nod)
		return (NULL);

	new_nod->n = n;
	new_nod->next = *head;
	*head = new_nod;

	return (new_nod);
}
