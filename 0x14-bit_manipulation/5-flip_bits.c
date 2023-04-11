#include "main.h"

/**
 * flip_bits - Counts the number of
 * bits to flip toget from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m, number_bits = 0;

	while (XOR > 0)
	{
		number_bits += (XOR & 1);
		XOR >>= 1;
	}

	return (number_bits);
}
