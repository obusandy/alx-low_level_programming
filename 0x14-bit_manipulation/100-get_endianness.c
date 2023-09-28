#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int r = 1;
	char *s = (char *) &r;

	return (*s);
}
