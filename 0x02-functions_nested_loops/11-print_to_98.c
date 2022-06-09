#include "main.h"
/**
 * print_to_98 - give a number line
 *
 * @n: function to call a number
 *
 * Return: give the ordered number list
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else
	{
		_putchar((98 / 10) + '0');
		_putchar((98 % 10) + '0');
	}
	_putchar('\n');
}
