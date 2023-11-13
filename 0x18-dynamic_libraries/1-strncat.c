#include <stdio.h>

/**
 * _strncat - concatenates two strings.
 * @dest: destination string
 * @src: source
 * @n: maximum number of characters to copy from src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	while (dest[destlen] != '\0')
		destlen++;
	while (src[srclen] != '\0')
		srclen++;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[destlen + i] = src[i];
	dest[destlen + i] = '\0';

	return (dest);
}
