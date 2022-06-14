#include "main.h"
/**
 * _strcpy - function to copy a string pointed to by src
 * @dest: the first pointer
 * @src: the second pointer
 *
 * Return: return pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int z = 0;
	int y = 0;

	while (*(src + z) != '\0')
		z++;

	for ( ; y < z; y++)
		dest[y] = src[y];
	dest[z] = '\0';

	return (dest);
}
