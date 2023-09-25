#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: head node in the linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *current = head;

	while (current)
	{
		s += current->n;
		current = current->next;
	}

	return (s);
}
