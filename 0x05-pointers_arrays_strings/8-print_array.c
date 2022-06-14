#include "main.h"
#include <stdio.h>
/**
 * print_array - print an array of integers
 * @a: pointer to an array
 * @n: number of integers in the array
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		printf("%d", a[z]);
		if (z != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
