#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: parameter 1
 *@s2: parameter 2
 *Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
