#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function to concatenate range of arrays
 * @min: least value in string
 * @max: max value in string
 *
 * Return: always success
 */
int *array_range(int min, int max)
{
	int *arr, z;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (z = 0; min <= max; z++, min++)
	{
		*(arr + z) = min;
	}
	return (arr);
}
