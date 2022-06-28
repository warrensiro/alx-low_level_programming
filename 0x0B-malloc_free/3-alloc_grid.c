#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function to return pointer to 2 dimensional array of integers
 * @width: the length of the width
 * @height: the length of vertical height
 *
 * Return: to the alloc_grid
 */
int **alloc_grid(int width, int height)
{
	int **s, m, n, p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	s = malloc(height * sizeof(int *));

	if (s == NULL)
	{
		return (NULL);
	}

	for (m = 0; m < height; m++)
	{
		s[m] = malloc(width * sizeof(int));
		if (s[m] == NULL)
		{
			for (p = 0; p <= m; p++)
			{
				free(s[p]);
			}
			free(s);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			s[m][n] = 0;
		}
	}
	
	return (s);
}
