#include "main.h"
/**
 * _strncpy - function to copy the string
 * @dest: first variable
 * @src: second variable
 * @n: upper limit of bytes
 *
 * description - to produce the string upto n bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int z = 0;

	while (z < n && src[z] != '\0')
	{
		dest[z] = src[z];
		z++;
	}

	while (z < n)
	{
		dest[z] = '\0';
		z++;
	}
	return (dest);
}
