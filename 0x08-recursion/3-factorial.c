#include "main.h"
/**
 * factorial - check the code
 * @n: number of factorial
 *
 * Return: always 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n  < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
