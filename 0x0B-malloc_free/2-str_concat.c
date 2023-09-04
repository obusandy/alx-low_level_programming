#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings and returns a pointer.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 * Return: A pointer to the concatenated string or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	size_t len_s1, len_s2, total_len;
	char *conc;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	total_len = len_s1 + len_s2;

	conc = (char *)malloc(total_len + 1);

	if (conc == NULL)
	{
		return (NULL);
	}

	strcpy(conc, s1);
	strcat(conc, s2);

	return (conc);
}
