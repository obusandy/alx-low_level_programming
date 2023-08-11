#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - generates the output of the number stored in the variable n
 *determines if the variable n is positive or negative.
 *Return: always (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("The number %d is ", n);
	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("is negative\n");

	return (0);

}
