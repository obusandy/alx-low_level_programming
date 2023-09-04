#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup -returns a pointer to a new string which is a duplicate
 *@str: character
 *Return: dup or NULL
 */
char *_strdup(char *str)
{
	char *cpy;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	cpy = malloc(sizeof(char) * (i + 1));

	if (cpy == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		cpy[r] = str[r];
	return (cpy);
}
