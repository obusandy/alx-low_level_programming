#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to the 1 integer
 * @b: Pointer to the 2 integer
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
