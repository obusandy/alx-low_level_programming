#include "lists.h"

/**
 * sum_dlistint - sums all of the data(n) of a dlistint_t linked list
 * @h: pointr to the start of th list
 * Return: sum or 0 if empty
 */


int sum_dlistint(dlistint_t *h)
{

	int addition = 0;
	dlistint_t *indx;

	for (indx = h; indx != NULL; indx = indx->next)
	{
		addition += indx->n;
	}

	return (addition);
}
