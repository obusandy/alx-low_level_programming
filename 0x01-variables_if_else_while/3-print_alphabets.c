#include <stdio.h>
/**
 * main - prints alphabet in lowercase, then in uppercase, then a new line
 * Description: Prints the alphabet in lowercase, then in uppercase
 * Return: Always (0)
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
