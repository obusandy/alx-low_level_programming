#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted array of integers
 * using the jump search algorithm.
 *
 * @list: input list
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: index of the number or -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t indx, s, j;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	j = (size_t)sqrt((double)size);
	indx = 0;
	s = 0;

	do
	{
		prev = list;
		s++;
		indx = s * j;

		while (list->next && list->index < indx)
			list = list->next;

		if (list->next == NULL && indx != list->index)
			indx = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)indx, list->n);

	} while (indx < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
