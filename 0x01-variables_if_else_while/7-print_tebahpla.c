#include <stdio.h>
/**
 *main - prints the lowercase alphabet in reverse
 *code should be in the main function
 *Return: always (0)
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
