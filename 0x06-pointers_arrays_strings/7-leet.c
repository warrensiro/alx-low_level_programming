#include "main.h"
/**
 * leet - to encode a string to 1337
 * @y: string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *y)
{
	int m, n;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacer[] = {'4', '3', '0', '7', '1'};

	for (m = 0; y[m] != '\0'; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			if (y[m] == find [n])
			{
				y[m] = replacer[n / 2];
				n = 9;
			}
		}
	}
	return (y);
}
