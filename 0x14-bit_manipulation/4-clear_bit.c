#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * clear_bit - clear the value of bit to 1
 * @n: pointer to number
 * @index: the bit to be set
 *
 * Return: 1 if successful and -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int add;

	if (index > 63)
	{
		return (-1);
	}
	add = 1 << index;
	*n = *n & (~add);
	return (1);
}
