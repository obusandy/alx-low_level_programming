#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @h: pointer
 * Return: void
 */

void free_dlistint(dlistint_t *h)
{

	while (h != NULL)
	{
		dlistint_t *next = h->next;

		free(h);
		h = next;
	}
}
