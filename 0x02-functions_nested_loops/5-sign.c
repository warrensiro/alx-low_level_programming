#include "main.h"
/**
 * print_sign - call the function
 *
 * @n: enumerate the values
 *
 * Return: 1 positive, -1 if negative else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
