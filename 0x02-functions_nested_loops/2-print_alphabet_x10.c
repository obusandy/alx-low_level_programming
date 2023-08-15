#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char r;

	while (i < 10)
	{
		r = 'a';
		while (r <= 'z')
		{
			_putchar(r);
			r++;
		}
		_putchar('\n');
		i++;
	}
}
