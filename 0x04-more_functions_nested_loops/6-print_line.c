#include "main.h"

/**
 * print_line - Draws a straight line using the character '_'.
 * @d: The number of times the character '_' should be printed.
 * Return: void
 */
void print_line(int d)
{
	if (d <= 0)
	{
		_putchar('\n');
		return;
	}

	while (d > 0)
	{
		_putchar('_');
		d--;
	}
	_putchar('\n');
}
