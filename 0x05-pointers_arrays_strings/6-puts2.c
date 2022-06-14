#include "main.h"
/**
 * puts2 - to print starting with first character
 * @str: pointer to the string
 *
 * Return: 0
 */
void puts2(char *str)
{
	int z = 0;
	int y = 0;
	char *c = str;
	int x;

	while (*c != '\0')
	{
		c++;
		z++;
	}
	y = z - 1;

	for (x = 0; x <= y; x++)
	{
		if ( x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\0');
}
