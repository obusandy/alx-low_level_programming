#include <stdio.h>
/**
 *main -  prints all the numbers of base 16 in lowercase
 *code should be in the main function
 *Return: always (0)
 *
 */

int main(void)
{
	int i;
	char k;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (k = 'a' ; k <= 'f' ; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
