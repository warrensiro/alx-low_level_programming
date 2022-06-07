#include <stdio.h>

/**
 * main - Entry point of a program
 *
 * description: to print alphabets in lowercase
 *
 * Return: always 0 success
*/
int main(void)
{
	char c;

	c = 'a';

	while (c <= 's')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
