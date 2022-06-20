#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: the string array to have character additions
 * @b: the constant byte of character
 * @n: the number of bytes of character b
 *
 * Return: to s the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;
	for (z = 0; z < n; z++)
	{
		s[z] = b;
	}
	return (s);
}
