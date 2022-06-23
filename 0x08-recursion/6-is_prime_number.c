#include "main.h"
/**
 * prime_b - check code
 * @z: the number
 * @y: number of power
 *
 * Return: always success
 */
int prime_b(int z, int y)
{
	if (z <= 1 || (z != y && z % y == 0))
	{
		return (0);
	}
	else if (z == y)
	{
		return (1);
	}
	else
	{
		return (prime_b(z, y + 1));
	}
}
/**
 * is_prime_number - check code
 * @n: the integer
 * \
 * Return: always success
 */
int is_prime_number(int n)
{
	return (prime_b(n, 2));
}
