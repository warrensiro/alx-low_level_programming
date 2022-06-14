#include "main.h"
/**
 * rev_string - give a string in reverse order
 * @s: pointer to string being reversed
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int z = 0;
	int y = 0;
	char *c = s;
	int x = 0;
	int w;
	char d;

	while (*c != '\0')
	{
		c++;
		z++;
	}

	y = z - 1;
	
	for ( ; x < ((y / 2) + 1) ; x++)
	{
		w = (y - x);
		d = s[x];
		s[x] = s[w];
		s[w] = d;
	}
}
