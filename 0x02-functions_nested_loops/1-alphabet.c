#include "main.h"
/**
 * main - entry point of a program
 *
 * description - to print the alphabet
 *
 * Return: Always 0
*/
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);
}
