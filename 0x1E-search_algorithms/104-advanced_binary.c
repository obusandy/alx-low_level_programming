#include "search_algos.h"

/**
 * rec_search - Performs a recursive binary search
 * for a value in a sorted array.
 *
 * @array:  A pointer to the first element of the sorted integer array.
 * @size: size of the array
 * @value: value to search in
 * Return: index of the first occurence of the value in the array
 */
int rec_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t intgr;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (intgr = 0; intgr < size; intgr++)
		printf("%s %d", (intgr == 0) ? ":" : ",", array[intgr]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - Calls the rec_search function to find the
 * index of a value in a sorted array
 * @array: input array
 * @size: number of elements
 * @value: value to search in
 * Return: index of the number or
 * -1 if the value is not present or the array is NULL or not sorted.
 *
 */
int advanced_binary(int *array, size_t size, int value)
{
	int indx;

	indx = rec_search(array, size, value);

	if (indx >= 0 && array[indx] != value)
		return (-1);

	return (indx);
}
