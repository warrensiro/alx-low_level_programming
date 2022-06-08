#include "main.h"
/**
 * print_alphabet_x10 - calls the program
 *
 * descritpion - print alphabet ten times
 *
 * Return: always success
 */
void print_alphabet_x10(void)
{
	char c;

	int a = 0;

	while (a < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		c++;

		_putchar('\n');
	}
}
