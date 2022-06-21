#include "main.h"
/**
 * strstr - function to cal a substring
 * @haystack: first string, the one to be searched
 * @needle: second string, the one to be found
 *
 * Return: NULL
 */
char *strstr(char *haystack, char *needle)
{
	int z = 0;
	int y = 0;

	while (haystack[z])
	{
		while (needle[y])
		{
			if (haystack[z + y] != needle[y])
			{
				break;
			}
			y++;
		}
		if (needle[y] == '\0')
		{
			return (haystack + z);
		}
		z++;
	}
	return ('\0');
}
