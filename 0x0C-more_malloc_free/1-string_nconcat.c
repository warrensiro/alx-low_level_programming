#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function to have length of a string
 * @s: a string
 *
 * Return: size of the string
 */
int _strlen(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		return (j);
	}
}
/**
 * string_nconcat - function to concatenate two strings
 * @s1: string one
 * @s2: string two
 * @n: size of string two
 *
 * Return: always success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int z, y, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	y = _strlen(s1);
	z = _strlen(s2);
	if (n < z)
		z = n;

	string = malloc(y + z + 1);

	if (string == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < y; x++)
		*(string + x) = *(s1 + x);

	for (x = 0; x < z; x++)
		*(string + (x + y)) = *(s2 + x);
	*(string + (x + y)) = '\0';
	return (string);
}
