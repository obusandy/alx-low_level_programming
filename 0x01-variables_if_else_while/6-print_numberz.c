#include <stdio.h>
/**
 *main - prints all single digit numbers of base 10 starting from 0
 *only use the putchar function
 *Return: always (0)
 */

int main(void)
{
	int alpha = '0';

	while (alpha <= '9')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
