#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_binary - print binary of a number
 * @n: number to be converted to binary
 *
 * Return: in binary the number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}
	else if (n == 1)
	{
		putchar ('1');
		return;
	}
	print_binary(n >> 1);
	putchar('0' + (n & 1));
}
