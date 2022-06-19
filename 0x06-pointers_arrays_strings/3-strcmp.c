#include "main.h"
/**
 * _strcmp - function to compare strings
 * @s1: first variable string for comparison
 * @s2: second variable string to compare
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int z = 0;

	while (s1[z] != '\0' && s2[z] != '\0')
	{
		if (s1[z] != s2[z])
			return (s1[z] - s2[z]);
		z++;
	}
	return (0);
}
