#include "search_algos.h"

/**
 * recursive_search - Performs a binary search for a value in
 * a sorted array.
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: no of elemennts in the array
 * @value: value to search in
 * Return: The index of the first occurrence of the value
 * in the array, if found.
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t indx;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (indx = 0; indx < size; indx++)
		printf("%s %d", (indx == 0) ? ":" : ",", array[indx]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	int intger;

	intger = recursive_search(array, size, value);

	if (intger >= 0 && array[intger] != value)
		return (-1);

	return (intger);
}
