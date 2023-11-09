#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @head_ptr: Pointer to the beginning of the linked list
 * Return: Num of nodes
 */
size_t print_dlistint(const dlistint_t *head_ptr)
{
	size_t nod_count;

	for (nod_count = 0; head_ptr != NULL; nod_count++)
	{
		printf("%d\n", head_ptr->n);
		head_ptr = head_ptr->next;
	}
	return (nod_count);
}
