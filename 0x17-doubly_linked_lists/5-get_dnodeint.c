#include "lists.h"

/**
 * get_dnodeint_at_index - Nth node of a list
 * @h: pointer to head node of the dlistint
 * @i: index of the node to be retrieved
 * Return: dlistint_t
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int i)
{
	unsigned int new_c = 0;

	if (h == NULL)
	{
		return (NULL);
	}

	while (h != NULL)
	{
		if (i == new_c)
		{
			return (h);
		}
		new_c++;
		h = h->next;
	}
	return (NULL);
}
