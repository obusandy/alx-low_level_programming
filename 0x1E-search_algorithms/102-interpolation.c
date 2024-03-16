#include "search_algos.h"

/**
 * interpolation_search - searches for value in an array of
 * integers using the Interpolation
 * search
 * algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: The index of the first occurrence of the value
 * in the array, if found.
 * -1 if the value is not present,
 * the array is NULL, or the array is not sorted.
 *
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t postn, l, hi;
	double j;

	if (array == NULL)
		return (-1);

	l = 0;
	hi = size - 1;

	while (size)
	{
		j = (double)(hi - l) / (array[hi] - array[l]) * (value - array[l]);
		postn = (size_t)(l + j);
		printf("Value checked array[%d]", (int)postn);

		if (postn >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[postn]);
		}

		if (array[postn] == value)
			return ((int)postn);

		if (array[postn] < value)
			l = postn + 1;
		else
			hi = postn - 1;

		if (l == hi)
			break;
	}

	return (-1);
}
