#include <stdio.h>
/**
 *main - prints all single digit numbers of base 10 starting from 0
 *code should be in the main function
 *Return: always (0)
 *
 */

int main(void)
{
	char base_10 = '0';

	while (base_10 <= '9')
	{
		putchar(base_10);
		base_10++;
	}
	putchar('\n');
	return (0);
}
