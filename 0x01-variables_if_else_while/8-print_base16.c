#include <stdio.h>
/**
 * main - entry point of a program
 *
 * description - print numbers of base 16 in lowercase
 *
 * Return: always 0
*/
int main(void)
{
	int digit;

	char letter;

	for (digit = 0; digit <= 9; digit++)
		putchar((digit % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
i}
