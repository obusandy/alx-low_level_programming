#include "main.h"
#include <stdio.h>
/**
 *_strpbrk - searches a string for set of bytes
 *@s:the first occurrence in the string
 *@accept: string to search s
 *Return: s or Null
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;
	while (*a != '\0')
	{
		if (*s == *a)
		{
			return (s);
		}
		a++;
	}
	s++;
	}
	return (NULL);
}
