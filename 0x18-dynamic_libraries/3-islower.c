#include "main.h"
/**
 *_islower -  checks for lowercase character
 *@c: parameter to be checked
 *Return:  1 if c is lowercase,0 if otherwise
 */
int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
			return (1);
		return (0);
}
