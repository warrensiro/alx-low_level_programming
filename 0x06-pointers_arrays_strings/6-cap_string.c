#include "main.h"
/**
 * cap_string - capitalize the string
 * @y: character input
 *
 * Return: with capitalized words
 */
char *cap_string(char *y)
{
	int z = 0;
	
	if (y[0] >= 'a' && y[0] <= 'z')
	{
		y[0] -= 32;
	}
	for (z = 0; y[z] != '\0'; z++)
	{
		switch (y[z])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case '\n':
			case '\t':
				if (y[z + 1] > 96 && y[z + 1] < 123)
				{
				y[z + 1] = y[z + 1] - 32;
				}
		}
	}
	return (y);
}	
