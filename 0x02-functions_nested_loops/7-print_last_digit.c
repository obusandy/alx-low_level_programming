#include "main.h"
/**
 *print_last_digit - prints last digit of a number and returns its valueprint
 *@f: the number to extract the last digit from
 *Return: the value of the last digit
 */
int print_last_digit(int f)
{
	int last_digit;

	if (f < 0)
		f = -f;
	last_digit = f % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}

