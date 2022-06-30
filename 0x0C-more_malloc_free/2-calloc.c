#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - print string to a certain length
 * @s: string
 * @b: print
 * @n: length of string
 *
 * Return: nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		*(s + z) = b;
	}
	return (s);
}
/**
 * _calloc - function to concatenate two strings
 * @nmemb: string one
 * @size: string two
 *
 * Return: always success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	_memset(arr, 0, nmemb * size);

	return (arr);
}
