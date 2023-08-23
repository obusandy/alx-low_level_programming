#include <stdio.h>

/**
 * _strncpy - copies a string, up to n characters
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
