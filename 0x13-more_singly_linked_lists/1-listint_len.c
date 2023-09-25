#include "lists.h"
#include <stddef.h>

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: pointers
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t dgts = 0;

	while (h)
	{
		dgts++;
		h = h->next;
	}

	return (dgts);
}
