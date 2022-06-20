#include "main.h"
/**
 * _memcpy - copy bytes from src to dest
 * @dest: pointer to memory area to receive bytes
 * @src: pointer to area that bytes are copied from
 * @n: number of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		dest[z] = src[z];
	}

	return (dest);
}
