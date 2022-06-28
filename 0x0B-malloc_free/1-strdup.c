#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - check code to give the pointer the new space for the string
 * @str: array
 *
 * Return: String
 */
char *_strdup(char *str)
{
	int y, z;
	char *string;
	if (str == NULL)
	{
		return (0);
	}
	y = 0;

	while (*(str + 1) != '\0')
	{
		y++;
	}
	string = malloc(y + 1);

	if (string == 0)
	{
		return (0);
	}
	for (z = 0; z < y; z++)
	{
		*(string + z) = *(str + z);
	}
	return (string);
}
