#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first num
 * @m: second num
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_answ = n ^ m;
	unsigned int num = 0;

	while (xor_answ > 0)
	{
		num += xor_answ & 1;
		xor_answ >>= 1;
	}

	return (num);
}
