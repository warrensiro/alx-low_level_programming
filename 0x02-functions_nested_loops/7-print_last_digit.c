#include "main.h"
/**
 * print_last_digit - check code
 *
 * @m: function for modulus
 *
 * Return: bring the result
 */
int print_last_digit(int m)
{
	int ret;

	ret = m % 10;

	if (ret < 0)
	{
		ret = (-m * ret);
	}
	_putchar(ret + '0');
	return (ret);
}
