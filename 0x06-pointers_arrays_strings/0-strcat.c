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
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	strcpy(dest, "hey ");
	strcpy(src, "Warren\0");
	strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}
