#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the character '\'.
 * @n: The number of times the character '\' should be printed.
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n > 1)
			for (j = 0; j < i; j++)
			{
			_putchar(' ');
			}
		 _putchar('\\');
		 _putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
