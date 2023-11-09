#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end f a dlistint_t list.
 *
 * @h: Pointer
 *
 * @n: Integer value to be added to the new node
 *
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint_end(dlistint_t **h, const int n)
{
	dlistint_t *new_elmt = NULL, *end = *h;

	new_elmt = malloc(sizeof(dlistint_t));

	if (new_elmt == NULL)
	{
		return (NULL);
	}
	new_elmt->n = n;
	new_elmt->prev = NULL;
	new_elmt->next = NULL;

	if (*h == NULL)
	{
		*h = new_elmt;
		return (*h);
	}

	while (end->next != NULL)
	{
		end = end->next;
	}
	new_elmt->prev = end;
	end->next = new_elmt;

	return (new_elmt);
}
