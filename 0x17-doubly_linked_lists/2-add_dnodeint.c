#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the list.
 * @head: double pointer to the start of the list
 * @n: value to be added to the list
 * Return: dlistint or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *my_elmt;

	my_elmt = malloc(sizeof(dlistint_t));
	if (my_elmt == NULL)
		return (NULL);

	my_elmt->n = n;
	my_elmt->next = *head;
	my_elmt->prev = NULL;
	if (*head != NULL)
		(*head)->prev = my_elmt;
	*head = my_elmt;
	return (my_elmt);
}
