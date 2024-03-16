#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input arry
 * @size: size of the arry
 * @value: value to search in
 * Return: index of the number or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int intger, i, j, prevsly;

	if (array == NULL || size == 0)
		return (-1);

	i = (int)sqrt((double)size);
	j = 0;
	prevsly = intger = 0;

	do
	{
		printf("Value checked array[%d] = [%d]\n", intger, array[intger]);

		if (array[intger] == value)
			return (intger);
		j++;
		prevsly = intger;
		intger = j * i;
	} while (intger < (int)size && array[intger] < value);

	printf("Value found between indexes [%d] and [%d]\n", prevsly, intger);

	for (; prevsly <= intger && prevsly < (int)size; prevsly++)
	{
		printf("Value checked array[%d] = [%d]\n", prevsly, array[prevsly]);
		if (array[prevsly] == value)
			return (prevsly);
	}

	return (-1);
}
