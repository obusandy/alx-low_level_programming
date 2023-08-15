#include "main.h"
/**
 *print_last_digit - prints last digit of a number and returns its valueprint
 *@f: the number to extract the last digit from
 *Return: the value of k
 */
int print_last_digit(int f)
{
	int k;

	k = f % 10;
	if (f < 0)
		k = -k;

	_putchar(k + '0');
	return (k);
}

