#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to be converted
 *
 * Return: The converted integer value
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 1;
	int r = 0;

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
		n = -n;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
	r = r * 10 + (s[i] - '0');
	i++;
	}
	return (r * n);
}
