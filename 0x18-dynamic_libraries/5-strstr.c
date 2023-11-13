#include "main.h"
#include <stdio.h>
/**
 *_strstr -  locates a substring
 *@needle: substring
 *@haystack: string
 *Return: 0 or haystack
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
