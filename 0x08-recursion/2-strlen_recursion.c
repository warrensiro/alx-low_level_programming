#include "main.h"
/**
 * _strlen_recursion - check code
 * @s: entry of string
 *
 * Return: always success
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
