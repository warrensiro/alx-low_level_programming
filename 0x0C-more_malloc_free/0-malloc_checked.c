#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - let's check memory allocation
 * @b: size of integer
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *string;

	string = malloc(b);

	if (string == NULL)
	{
		exit(98);
	}
	return (string);
}
