#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string to be reversed
 *Return: void
 */
void rev_string(char *s)
{
	int i;
	char j;
	int c = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		c++;
	for (i = 0 ; i < c / 2 ; i++)
	{
		j = s[i];
		s[i] = s[c - 1 - i];
		s[c - 1 - i] = j;
	}
}
