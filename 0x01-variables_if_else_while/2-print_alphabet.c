#include <stdio.h>
/**
 *main - generates output of the alphabet in lowercase followed by a new line.
 *You can only use the putchar function
 *Return: always (0)
 *
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
