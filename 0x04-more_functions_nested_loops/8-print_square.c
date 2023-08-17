#include "main.h"

/**
 * print_square - Prints a square using the character '#'.
 * @s: The size of the square.
 * Return: void
 */
void print_square(int s)
{
	int i, j;

	if (s > 0)
	{
		for (i = 0; i < s; i++)
		{
			for (j = 0; j < s; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}

