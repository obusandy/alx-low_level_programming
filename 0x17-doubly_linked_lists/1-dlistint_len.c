#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointr to the first in the list
 * Return: num of nodes in the dlistint list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nod_count = 0;

	if (h == NULL)
		return (nod_count);

	while (h != NULL)
	{
		nod_count++;
		h = h->next;
	}

	return (nod_count);
}
