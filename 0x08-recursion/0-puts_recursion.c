#include "main.h"
/**
 * _puts_recursion - print a string and follow it by a line
 * @s: the string to print
 *
 * Return: s
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
