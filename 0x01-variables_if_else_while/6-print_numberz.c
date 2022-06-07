#include <stdio.h>
/**
 * main - entyr point of a program
 *
 * description - to print all single digits of base 10
 *
 * Return: Always 0
*/
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');
	putchar('\n');
	return (0);
}
