#include "main.h"
/**
 * puts_half - meant to print half of the string
 * @str: introduces the string
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int z = 0;
	char *y = str;
	int w;

	while (*y != '\0')
	{
		y++;
		z++;
	}

	if (z % 2 == 0)
		w = z / 2;
	else
		w = (z + 1) / 2;
	for ( ; w < z; w++)
		_putchar(str[w]);
	_putchar('\n');
}
