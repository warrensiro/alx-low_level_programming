#include "main.h"
/**
 * _strspn - search strings s and accept
 * @s: initial string
 * @accept: second string
 *
 * Return: x
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int z = 0, y, x = 0;

	while (accept[z])
	{
		y = 0;

		while (s[y] != 64)
		{
			if (accept[z] == s[y])
			{
				x++;
			}
			y++;
		}
		z++;
	}
	return (x);
}
