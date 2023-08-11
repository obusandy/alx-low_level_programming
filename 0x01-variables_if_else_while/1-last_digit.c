#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 *main - generates output of the last digit of the number stored in variable n
 *variable n will store a different value every time you run this program
 *Return: always (0)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code goes here */
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
