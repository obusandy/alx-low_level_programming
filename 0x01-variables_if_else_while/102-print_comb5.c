#include <stdio.h>
/**
 *main - prints all possible combinations of two two-digit numbers.
 *numbers should be printed with two digits
 *Return: always (0)
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 99; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 99; digit2++)
		{
			putchar((digit1 / 10) + '0');
			putchar((digit1 % 10) + '0');
			putchar(' ');
			putchar((digit2 / 10) + '0');
			putchar((digit2 % 10) + '0');
			if (digit1 != 98 || digit2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
