#include "main.h"
/**
 * main - entry point of a program
 *
 * description - print a string
 *
 * Return: always 0 success
*/
int main(void)
{
	char *m = "_putchar";

	while (*m)
	{
		_putchar(*m);
		m++;
	}
	_putchar('\n');

	return (0);
}
