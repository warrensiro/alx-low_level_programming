#include "main.h"
/**
 * _isalpha - entry point of program
 *
 * @c: Program to call command to check for alpha
 *
 * description - to check for alphabet
 *
 * Return: 1 if alpha
 */
int _isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	else
		return (0);
}
