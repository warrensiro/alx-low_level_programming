#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits you'd flip so as to get from one number to another
 * @n: the first input variable
 * @m: the second input variable
 *
 * Return: the number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0, comp, comp1;

	while (!(n == 0 && m == 0))
	{
		comp = n & 1;
		comp1 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (comp != comp1)
		{
			flip += 1;
		}
	}
	return (flip);
}
