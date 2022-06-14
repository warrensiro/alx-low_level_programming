#include "main.h"
/**
 * _strlen - get the very length
 * @s: call in a character
 *
 * Return: length of the variable string
 */
int _strlen(char *s)
{
	int z = 0;

	while (*s != '\0')
	{
		z++;
		s++;
	}
	return (z);
}
