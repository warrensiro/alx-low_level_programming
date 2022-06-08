#include "main.h"
/**
 * _abs - calls program as function for obtaining absolute value
 *
 * @m: argument for absolute value
 *
 * Return: always successful
 */
int _abs(int m)
{
	return (m * ((m > 0) - (m < 0)));
}
