#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 *                 of integers.
 * @array: A pntr to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of the value in the array,
 * if found.
 *          -1 if the value is not present or the array is NULL.
 * Description: Prints a value every time it is compared in the array.
 *        This function implements a linear search algorithm to find the first
 *        occurrence of the specified value within the given integer array
 *
 */
int linear_search(int *array, size_t size, int value)
{
  size_t intg;

  if (array == NULL)
    return (-1);

  for (intg = 0; intg < size; intg++)
  {
    printf("Value checked array[%ld] = [%d]\n", intg, array[intg]);
    if (array[intg] == value)
      return (intg);
  }

  return (-1);
}
