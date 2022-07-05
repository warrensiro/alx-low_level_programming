#include <stdio.h>
#include "3-function_like_macro.h"
/**
 * main - check code for sum of two numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int s;

	s = SUM(98, 1024);
	printf("%d\n", s);
	return (0);
}
