#include "main.h"
/**
 * print_last_digit - check code
 *
 * @l: function for modulus
 *
 * Return: bring the result
 */
int print_last_digit(int l)
{
	int ret;

	ret = l % 10;

	if (ret < 0)
	{
		ret = (-l * ret);
	}
	_putchar(ret + '0');
	return (ret);
}
