#include "main.h"
/**
 *print_last_digit - prints last digit of a number and returns its valueprint
 *@f: the number to extract the last digit from
 *Return: the value of k
 */
int print_last_digit(int f)
{
	int k;

	if (f < 0)
		k = -f;
	else
		k = f;

	k = k % 10;
	_putchar(k + '0');

	return (k);
}

