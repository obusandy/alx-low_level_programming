#include <stdio.h>

/**
 *main -  finds and prints the sum of the even-valued terms
 *Return: (0)
 */
int main(void)
{
	int limit = 4000000;
	int num1 = 1;
	int num2 = 2;
	int next;
	int sum = 2;

	while (next <= limit)
	{
		next = num1 + num2;
		if (next % 2 == 0)
			sum = sum + next;
		num1 = num2;
		num2 = next;
	}
	printf("%d\n", sum);
	return (0);
}
