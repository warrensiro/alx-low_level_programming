#include <stdio.h>
/**
 * main - entry point of a program
 *
 * description - program to print alphabets in lowercase and uppercase
 *
 * Return: always 0 success
*/
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
