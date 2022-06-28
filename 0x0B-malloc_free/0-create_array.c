#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - check code for arrays of character
 * @size: size of array
 * @c: character
 *
 * Return: Array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *arr;

	if (size == 0)
	{
		return (0);
	}
	arr = malloc(size);

	if (arr == 0)
	{
		return (0);
	}
	for (j = 0; j < size; j++)
	{
		*(arr + 1) = c;
	}
	*(arr + 1) = '\0';

	return (arr);
}
