#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - introduce the concatenation function
 * @dest: introduce first string
 * @src: introduce second string
 *
 * description - copy string 2 to string 1
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int first = 0, dest_len = 0;

	while (dest[first++])
		dest_len++;

	for (first = 0; src[first]; first++)
		dest[dest_len++] = src[first];
	
	return (dest);
}
