#include <stdio.h>
/**
 * main - entry point of a program
 *
 *
 * description - print all base 10 starting from zero
 *
 * Return: always 0
*/
int main(void)
{
	int a;

	a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
