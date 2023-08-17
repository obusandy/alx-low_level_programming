#include "main.h"

/**
 * print_triangle - Prints a triangle using the character '#'.
 * @s: The size of the triangle.
 * Return: void
 */
void print_triangle(int s)
{
	int i, j;

	if (s > 0)
	{
	for (i = 0; i < s; i++)
	{
	for (j = 0; j < s; j++)
	{
	if (j < s - (i + 1))
	{
		_putchar(' ');
	}
	else
	{
		_putchar('#');
	}
	}
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}

