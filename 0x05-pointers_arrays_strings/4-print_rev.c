#include "main.h"
/**
 * print_rev - produce a string in reverse
 * @s:  a pointer to the string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int z;

	for (z = 0; s[z] != '\0'; z++)
	{
	}

	for (z = z - 1; z >= 0; z--)
	{
		_putchar(s[z]);
	}
	_putchar('\n');
}
