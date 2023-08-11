#include <stdio.h>
/**
 *main -  prints all possible combinations of single-digit numbers
 *Numbers should be printed in ascending order
 *use putchar four times maximum
 *Return: always (0)
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
