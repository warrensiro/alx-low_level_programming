#include "main.h"
/**
 * _puts - to print a string
 * @str: gives a pointer to the string
 *
 * Return: 0
 */
void _puts(char *str)
{
	int z = 0;

	while (*(str + z) != '\0')
	{
		_putchar(str[z]);
		z++;
	}
	_putchar('\n');
}
