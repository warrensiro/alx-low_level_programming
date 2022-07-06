#include "main.h"
#include <stdio.h>
/**
 * array_iterator - execute a function given a s a parameter to each array
 * @array: array ellemnts to be acted upon
 * @size: size of the array
 * @action: the function to be executed
 * 
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t z;

	if (array != NULL && action != NULL)
	{
		for (z = 0; z < size; z++)
		{
			action(array[z]);
		}
	}
}
