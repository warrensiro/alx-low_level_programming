#include "main.h"

/**
 * _isupper - check the code
 * @c: call in the integer
 *
 * Return: 1 if success otherwise all lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
