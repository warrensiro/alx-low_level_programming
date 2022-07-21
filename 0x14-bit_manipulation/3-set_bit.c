#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * set_bit - set value of a bit to 1 at a given index
 * @index: index to set
 * @n: number to be converted
 *
 * Return: (-1) if an error or (1) if successful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int add;

	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n | add;
	return (1);
}
