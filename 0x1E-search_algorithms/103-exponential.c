#include "search_algos.h"

/**
 * _binary_search - Searches for a value in a sorted array
 *                  of integers using binary search.
 * @array: A pointr to the first element to search.
 * @left: The starting index of the sub-array to search.
 * @right: The ending index of the sub-array to search.
 * @value: The value to search for.
 *
 * Return: Index where value is located otherwise
 * If the value is not present or the array is NULL, -1.
 *
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t intgr;

	if (array == NULL)
		return (-1);

	while (right >= left)
	// Calculate the middle index without potential overflow
	{
		printf("Searching in array: ");
		for (intgr = left; intgr < right; intgr++)
			printf("%d, ", array[intgr]);
		printf("%d\n", array[intgr]);

		intgr = left + (right - left) / 2;
		if (array[intgr] == value)
			return (intgr);
		if (array[intgr] > value)
			right = intgr - 1;
		else
			left = intgr + 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 *                      of integers using exponential search.
 * @array: A pointr to the first element of the array to search.
 * @size: The n total o of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description:  This function implements the exponential search algorithm,
 * a technique suitable for very large sorted arrays.
 * It first determines the minimum power of 2 that is greater than or equal to the
 * array size.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t integr = 0, rght;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (integr = 1; integr < size && array[integr] <= value; integr = integr * 2)
			printf("Value checked array[%ld] = [%d]\n", integr, array[integr]);
	}

	rght = integr < size ? integr : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", integr / 2, rght);
	return (_binary_search(array, integr / 2, rght, value));
}
