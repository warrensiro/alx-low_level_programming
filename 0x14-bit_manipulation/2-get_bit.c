#include <stdio.h>
#include "main.h"
/**
 * get_bit - return value of bit at a given index
 * @n: bit value of index
 * @index: the int to be returned
 *
 * Return: bit value of the index or -1 if its an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (n & 1);
	}
	else
	{
		return (get_bit(n >> 1, index - 1));
	}
}
