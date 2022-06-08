#include "main.h"
/**
 * _islower - entry point for this program to check for lowercase letters
 *
 * @c - parameter for command
 *
 * description - checks for lowercase letters
 *
 * Return: to return 1 if there is lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
