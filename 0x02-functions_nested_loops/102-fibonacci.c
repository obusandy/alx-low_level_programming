#include <stdio.h>
/**
 *main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 *Return: (0)
 *
 *
 */
int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int next;
	int i;

	printf("%d, %d", num1, num2);

	for (i = 3; i <= 50; i++)
	{
		next = num1 + num2;
		printf(", %d", next);
		num1 = num2;
		num2 = next;
	}

	printf("\n");

	return (0);
}
