#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string (0 or 1)
 * Return: The converted unsigned int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int answ = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		answ = (answ << 1) | (*b - '0');
		b++;
	}

	return (answ);
}
