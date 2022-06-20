#include "main.h"
/**
 * _strchr - to locate char c in the string
 * @s: Pointer to containing string
 * @c: the character to be found
 *
 * Return: *s or NULL
 */
char *_strchr(char *s, char c)
{
	int z = 0, y;

	while (s[z])
	{
		z++;
	}

	for (y = 0; y <= z; y++)
	{
		if (c == s[y])
		{
			s += y;
			return (s);
		}
	}
	return ('\0');
}
