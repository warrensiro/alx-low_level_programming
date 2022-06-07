#include <stdio.h>
/**
 * main - entry point of a program
 *
 * description - print in reverse the alphabet in lowercase
 *
 * Return: always 0
*/
int main(void)
{
	char alphabet;

	alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
