#include "main.h"
/**
 * _strpbrk - function to locate first occurence in string
 * @s: initial string
 * @accept: the base string
 *
 * Return: pointer to accepted string
 */
char *_strpbrk(char *s, char *accept)
{
	int z = 0, y;

	while (s[z])
	{
		y = 0;
		
		while (accept[y])
		{
			if (s[z] == accept[y])
			{
				s += z;
				return (s);
			}
			y++;
		}
		z++;
	}
	return ('\0');
}
