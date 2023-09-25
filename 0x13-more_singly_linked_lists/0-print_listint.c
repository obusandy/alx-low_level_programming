#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: Pointer
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t dgts = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		dgts++;
		h = h->next;
	}

	return (dgts);
}
