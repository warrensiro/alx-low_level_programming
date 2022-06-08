#include "main.h"
/**
 * print_alphabet - entry point of a program
 *
 * description - to print the alphabet
 *
 * Return: Always 0
*/
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
