#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - sum all variables
 * @n: the variable
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int z = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (z < n)
		{
			sum += va_arg(args, int);
			z++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
