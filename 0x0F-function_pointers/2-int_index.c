#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - to search for an integer
 * @array: array elements to compare by cmp
 * @size: size of the array
 * @cmp: pointer to function to do comparison of integers
 *
 * Return: z
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int z;

	if (size >= 0 && array != NULL && cmp != NULL)
	{
		for (z = 0; z < size; z++)
		{
			if (cmp(array[z]) != 0)
			{
				return (z);
			}
		}
	}
	return (-1);
}
