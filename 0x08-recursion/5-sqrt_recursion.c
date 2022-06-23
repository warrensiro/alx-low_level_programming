#include "main.h"
/**
 * sqrt_a - check code
 * @y: number
 * @z: number of root
 *
 * Return: always success
 */
int sqrt_a(int y, int z)
{
	if (z * z == y)
	{
		return (z);
	}
	else if (z * z > y)
	{
		return (-1);
	}
	else
	{
		return (sqrt_a(y, z + 1));
	}
}
/**
 * _sqrt_recursion - check code
 * @n: the integer
 *
 * Return: always success
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
