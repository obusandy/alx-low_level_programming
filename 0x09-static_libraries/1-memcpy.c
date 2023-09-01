#include "main.h"
#include <stdio.h>
/**
 *_memcpy - copies n bytes from memory area
 *@src: source
 *@dest: destination
 *@n: number of bytes
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
